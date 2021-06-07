#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(8);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    vector<int>::iterator it;//it is like pointer over here
    for(it=v.begin();it !=v.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    for(auto element :v){
        cout<<element<<" ";
    }cout<<endl;
    v.pop_back();//deletes last element
    cout<<"Result after pop_back"<<endl;
    for(auto element :v){
        cout<<element<<" ";
    }cout<<endl;
    v.push_back(8);

    vector<int>v2(4,50);
    cout<<"Result of vector<int>v2(4,50);"<<endl;
    
    for(auto element :v2){
        cout<<element<<" ";
    }cout<<endl;

    swap(v,v2);
    cout<<"Swapping for first time"<<endl;
    cout<<"v ";
    for(auto element :v){
        cout<<element<<" ";
    }cout<<endl;
    cout<<"v2 ";
    
    for(auto element :v2){
        cout<<element<<" ";
    }cout<<endl;

    cout<<"Swapping again"<<endl;
    v.swap(v2);
    cout<<"v ";
    
    for(auto element :v){
        cout<<element<<" ";
    }cout<<endl;

    cout<<"v2 ";
    
    for(auto element :v2){
        cout<<element<<" ";
    }cout<<endl;

    cout<<"sorting"<<endl;
    sort(v.begin(),v.end());
    
    for(auto element :v){
        cout<<element<<" ";
    }cout<<endl;


    return 0;
}