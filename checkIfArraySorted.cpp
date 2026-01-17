#include<bits/stdc++.h>

using namespace std;
bool is_sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){

        }else{
            return false;

        }

    }
    return true;

}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<is_sorted(arr,n);

}