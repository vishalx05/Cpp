#include<bits/stdc++.h>
using namespace std;
int largestEle2(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-1];


}
int largestEle(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];

        }
    }
    return largest;

}
int main(){
    int arr[]={1,2,5,5,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<largestEle2(arr,n);

}