#include<iostream>
using namespace std;
#define n 100
class stack{
    int top;
    int* arr;
    public:
    stack(){
         arr= new int [n];
        top=-1;
    }
    void push(int val){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"No elements"<<endl;
            return;
        }
        top--;
    }

    int  tope(){
        if(top==-1){
            cout<<"No elements"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return (top==-1);
    }

};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"Parth"<<endl;
    cout<<st.tope()<<endl;
    st.pop();
    cout<<st.tope()<<endl;
    st.pop();
    st.pop();
    st.pop();
    
    return 0;
}