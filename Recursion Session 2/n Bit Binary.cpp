// https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
    void rec(vector<string>& ans, int N,string curr, int nz, int no){
        if(N==0){
            ans.push_back(curr);
            return;
        }
        if(no>nz){
            rec(ans,N-1,curr+"0",nz+1,no);
        }
        rec(ans,N-1,curr+"1",nz,no+1);
    }
	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    rec(ans,N,"",0,0);
	    
	    return ans;
	}
};