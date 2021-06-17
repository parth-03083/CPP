#include "bits/stdc++.h"
using namespace std;
signed main(){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        priority_queue<int,vector <int> > maxh;
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            maxh.push(v[i]);
        }
        while(!maxh.empty()){
            int x=maxh.top();
            maxh.pop();
            sum+=x;
            cnt++;
            if(sum>=k){
                break;
            }

        }
        if(sum<k){
            cout<<" -1 "<<endl;

        }
        else{
            cout<<cnt<<endl;
        } 

    return 0;
}