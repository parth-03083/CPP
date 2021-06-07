#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        N=0;
    }

    void push(int val){
        queue<int> temp;
        q2.push(val);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();


        }
        temp=q1;
        q1=q2;
        q2=temp;
        }

        void pop(){
            cout<<q1.front()<<endl;
            q1.pop();

        }

        bool empty(){
                return q1.empty() && q2.empty();
        }

};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
    

}
