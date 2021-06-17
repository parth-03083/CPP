#include "bits/stdc++.h"
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

void zigzagBST(node* root){
    if(root==nullptr){
        return ;
    }
    stack <node*> currentLevel;
    stack <node*> nextLevel;
    bool ltor=true;
    currentLevel.push(root);
    while(!currentLevel.empty()){
        node* temp=currentLevel.top();
        currentLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        

        if(ltor){
                if(temp->left){
                  nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right); 
                 }
             }
                else{
                    if(temp->right){
                        nextLevel.push(temp->right);

                    }
                    if(temp->left){
                        nextLevel.push(temp->left);
                }
            }
        }
         if(currentLevel.empty()){
             ltor=!ltor;
             swap(currentLevel,nextLevel); 
         }



    }

}
int main(){
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->left=new node(5);
    root->left->right=new node(10);
    zigzagBST(root);
    return 0;
}