#include<iostream>
using namespace std;
int normal(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;

    }
    return sum;
}

int Rec(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Rec(n-1);
    return (n+prevsum);
}


int main(){
    int n;
    cin>>n;
    cout<<Rec(n)<<endl;
    return 0;

}