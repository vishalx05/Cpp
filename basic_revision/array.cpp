#include<iostream>
#include<cmath>
#include<climits>

using namespace std;
/*
Print all elements of an array.

Find the sum of all elements in an array.

Find the average of elements in an array.

Find the maximum element in an array.

Find the minimum element in an array.

Count even and odd numbers in an array.

Count positive, negative, and zero elements.

Copy elements from one array to another.

Print array elements in reverse order.

Find the length of an array (without using built-in length in C/C++).
*/
int main(){
    int arr[]={6,3,2,8,9,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int avg;
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        sum+=arr[i];

        cout<<arr[i]<<"   ";
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    cout<<"\n\nMin"<<min<<"\nMax"<<max<<endl;
    cout<<"Avg"<<sum/size<<endl;
    cout<<"Sum="<<sum<<endl;


}