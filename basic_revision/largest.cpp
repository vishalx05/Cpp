#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,12,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            lar=arr[i];
        }

    }
    cout<<lar;
}