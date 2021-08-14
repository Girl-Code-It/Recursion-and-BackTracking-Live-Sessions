// https://practice.geeksforgeeks.org/problems/subset-sums2234/1


#include<bits/stdc++.h>
using namespace std;

// try solving it using the method we discussed during the session as well.
class Solution{
    public:
    void subsets(vector<int>&arr,int N,int index,int sum,vector<int>&v){
        if(index==N){
            v.push_back(sum); return;
        }
        
        subsets(arr,N,index+1,sum+arr[index],v);
        
        subsets(arr,N,index+1,sum,v);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>v;
        subsets(arr,N,0,0,v);
        sort(v.begin(),v.end());
        return v;
    }
};