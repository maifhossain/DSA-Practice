#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    for(int x=0;x<N;x++){
        cin>>A[x];
    }
    reverse(A.begin(),A.end());
    for(int x:A){
        cout<<x<<" ";
    }


    return 0;
}