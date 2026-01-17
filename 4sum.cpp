//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++


    vector<vector<int> > fourSum(vector<int> &arr, int target) {
        set<vector<int>>st;
        int n=arr.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        long long sum=arr[i]+arr[j]+arr[k]+arr[l];
                        if(sum==target){
                            vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);

                        }
                    }
                }
            }
        }

        vector<vector<int> > ans(st.begin(),st.end());
        return ans;

    }

//{ Driver Code Starts.

int main() {
    vector<int>arr={0, 0, 2, 1, 1};
    int  target = 1;
    
    return 0;
}

// } Driver Code Ends
