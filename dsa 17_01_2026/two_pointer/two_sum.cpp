#include<iostream>
#include<iterator>
#include <algorithm>
using namespace std;

pair<int,int> brute(int arr[],int n,int tar){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==tar){
                return {i,j};
            }
        }
    }
    return {-1,-1};

}

pair<int,int>optimal(int arr[],int n,int tar){
    sort(arr,arr+n);

    int i=0,j=n-1;

    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==tar){
           return {arr[i], arr[j]};
        }
        else if(sum<tar){
            i++;
        }
        else{
            j--;

        }
    }
    return {-1,-1};

}
int main(){
    int arr[]={2,3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // pair<int,int>result=brute(arr,n,6);
    pair<int,int>result=optimal(arr,n,6);

    if(result.first!=1){
        cout<<"indices = "<<result.first<<result.second<<endl;

    }
    else{
        cout<<"not Found";

    }


}