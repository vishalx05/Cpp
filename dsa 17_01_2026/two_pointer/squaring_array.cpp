#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>brute(vector<int>arr){
    int n=arr.size();

    // nums = [-4,-1,0,3,10]
    vector<int>res(n);
    for(int i=0;i<n;i++){
        res[i]=arr[i]*arr[i];

    }

    sort(res.begin(),res.end());

    return res;
}
vector<int>merge(vector<int>a,vector<int>b){
    int n=a.size();
    int m=b.size();
    vector<int>res(n+m);
    int id=0;

    int i=0,j=0;
    while(i<n && j<m){

        if(a[i]<=b[j]){
            res[id]=a[i];
            i++;id++;
        }else{
            res[id]=b[j];
            j++;id++;

        }
    }
    while(i<n){
        res[id]=a[i];
        i++,id++;
    }
    while(j<m)
    {
        res[id]=b[j];
        j++,id++;

    }

    return res;

}
vector<int> optimal(vector<int> arr) {
    int n = arr.size();
    vector<int> a, b;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            a.push_back(arr[i] * arr[i]);   // FIX 2: square
        else
            b.push_back(arr[i] * arr[i]);   // FIX 2: square
    }

    reverse(a.begin(), a.end());             // FIX 3

    if (a.empty()) return b;
    if (b.empty()) return a;

    vector<int> res = merge(a, b);
    return res;
}
int main(){
    vector<int>arr={-4,-1,0,3,10};
    vector<int>res=optimal(arr);
    for(auto r:res){
        cout<<r<<"  ";

    }
}