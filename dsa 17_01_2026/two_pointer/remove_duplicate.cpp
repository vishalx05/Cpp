/*
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
*/
#include<iostream>
using namespace std;
#include<vector>

int optimal(vector<int>&arr){
    int n=arr.size();
    int off=0;
    int cm=1;
    int no=1;
    while(cm<n){
        if(arr[cm]==arr[cm-1]){
            cm++;
            continue;
        }
        arr[off+1]=arr[cm];
        off+=1;
        no++;cm++;


    }
    return no;

}

int main(){
    vector<int>arr={1, 2, 2, 3, 4, 4, 4, 5, 5};
    cout<<optimal(arr);
   

}