#include<iostream>
using namespace std;
void greet(){
    cout<<"hello vikas";

}
int max(int a,int b){
    if(a>b){
        cout<<"a is greater"<<a<<endl;

    }
    else{
        cout<<"b is greater"<<b<<endl;

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  "<<endl;
    }
}
int main(){
    int arr[]={1,2,3,3,3,123};
    int n=sizeof(arr) / sizeof(int);
    printArray(arr,n);
}