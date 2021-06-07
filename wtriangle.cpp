#include<iostream>
using namespace std;
int main(){
    int n;
    int ctr=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            
           cout<<ctr;
           cout<<" ";
           ctr++;


        }
        
        cout<<endl;
        

    }
    
    return 0;
}