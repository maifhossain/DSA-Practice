#include<bits/stdc++.h>
using namespace std;
int main(){


   int N;
   cin>>N;
   vector<int> A(N);
   vector<int> B(N);
   for(int x=0;x<N;x++){
    cin>>A[x];
    
   }
   for(int j=0;j<N;j++){
    cin>>B[j];
    
    }
    vector<int> C;
    for(int k=0;k<N;k++){
        C.push_back(B[k]);

    }
    for(int k=0;k<N;k++){
        C.push_back(A[k]);

    }
    for(int x:C){
        cout<<x<<" ";
    }
     
    

    return 0;
}