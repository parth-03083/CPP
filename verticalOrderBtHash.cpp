#include"bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
void  getVO(Node* root,int hd ,map<int,vector <int> > &m){
    if(root==NULL){
        return;
    }
    m[hd].push_back(root->data);
    getVO(root->left,hd-1,m);
    getVO(root->right,hd+1,m);
}
int main(){
    Node* root=new Node(10);
    root->right= new Node(7);
    root->right->right=new Node(8);
    root->right->left=new Node(9);
    root->left=new Node(4);
    root->left->left=new Node(1);
    root->left->right=new Node(2);
    /*
                10
               /  \
              4    7
             / \  / \
            1  2  9  8
    */
   map<int,vector<int> > m;
    int hd=0;
   getVO(root,hd,m);

    map<int,vector<int> > :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
        cout<<(it->second)[i]<<" "; 
        }
        cout<<endl;
    }


}