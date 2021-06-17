#include <bits\stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int> prices){ 
    vector<int> ans;
    stack < pair<int,int> > st;
    int price=0,i=0;
    for(int i=0;i<prices.size();i++){
        price=prices[i];
        int days=1;
        while(!st.empty() && st.top().first<=price){
            days+= st.top().second;
            st.pop();
        }
        pair<int,int> p;
        p.first=price;
        p.second=days;
        st.push(p);
        ans.push_back(days);
    } 
    return ans;

}
int main(){
    vector<int> a;
    a.push_back(100);
    a.push_back(80);
    a.push_back(60);
    a.push_back(70);
    a.push_back(60);
    a.push_back(75);
    a.push_back(85);

    vector<int> res=stockSpan(a);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }cout<<endl;
    return 0;

}