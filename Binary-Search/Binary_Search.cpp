#include<bits/stdc++.h>
using namespace std;
int main(){
    //Input size of array
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    //Input array elements in sorted order
    cout<<"Enter the elements in sorted order: ";
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    //Input the value to be searched
    int value;
    cout<<"Enter the value: ";
    cin>>value;

    //Binary Search Algorithm Initialization
    int low=0,high=n-1,mid;
    int flag=0;   //flag to check if element is found or not


    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==value){
            flag=1;   //Value found
            break;

        }else if(arr[mid]>value){
            high=mid-1;  //Search in left half

        }else{
            low=mid+1;  //Search in right half
        }
    }

    //Output the result

    if(flag==1){
        cout<<"Element found at index "<<mid<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }


    return 0;
}