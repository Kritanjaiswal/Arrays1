#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=arr[0], secMax=arr[0];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int i=0; i<n; i++){
        if(secMax<arr[i] && arr[i]!=max) secMax=arr[i];
    }
    cout<<secMax;`
}