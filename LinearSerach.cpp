#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int x;
    bool flag=false;
    cin>>x;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==x) {
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"present";
    else cout<<"Not Present";
}