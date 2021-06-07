#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,i,val,idx,which,size;
    cin>>n>>q;
    vector<vector<int>> vn;
    for( i=0;i<n;i++){
        cin>>size;
    vector<int> vi;
    
  for (int j = 0; j < size; ++j) {
            cin >> val;
            vi.push_back(val);
        }
    vn.push_back(vi);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> idx;
        cout << vn[which][idx] << endl;
    }
    
    
       
    return 0;
}