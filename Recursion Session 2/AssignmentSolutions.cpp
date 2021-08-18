#include<bits/stdc++.h>
using namespace std;

// 1==============================================
class Solution{
public:
    void juggler(vector<int>& ans, long long N){
        ans.push_back(N);
        
        if(N==1){
            return;
        }
        
        if(N%2==0){
            juggler(ans,sqrt(N));
        } else {
            juggler(ans,sqrt(N*N*N));
        }
    }
    vector<int> jugglerSequence(int N){
        vector<int> ans;
        juggler(ans,(long long)N);
        return ans;
    }
};

// 2 =======================================
void rec(string input,int index,string output,vector<string> &v){
    if(index==input.size()){
        v.push_back(output);
        return;
    }    
    
    rec(input,index+1,output+input[index],v);
        
    rec(input,index+1,output+" "+ input[index],v);
           
        
    }

vector<string>  spaceString(char str[])
{
    string input = str;
    vector<string>v; 
    string curr="";
    curr+=input[0];
    rec(input,1,curr,v);
    return v;
}


// 3 ==========================================================================
vector<int> allIndex(vector<int>& arr, int i, int tar)
{
    if(i==arr.size()){
        vector<int> base;
        return base;
    }
    vector<int> ans;
    
    
    vector<int> sans=allIndex(arr,i+1,tar);
    
    if(arr[i]==tar){
        ans.push_back(i);
    }
    for(int i=0; i<sans.size(); i++){
        ans.push_back(sans[i]);
    }
    
    return ans;
}

// 4 =======================================================================================
class Solution
{
    public:
long long int series(int n )
     {  
         if(n<1)
     return 0;
         if(n==1 || n==2)
         {
         return n-1;
         }
        long long int x=series(n-2);
        long long int y=series(n-1);
         return (x*x-y);
     }
    void gfSeries(int N)
    { 
        for(long long int i=1;i<=N;i++)
        cout<<series(i)<<" ";
        cout<<endl;
    }
};

// 5======================================================================================

class Solution{
public:
    long long solve(int p,int cnt){
        if(p==0)return 1;
        return solve(p-1,cnt+1)*cnt;
    }
    
    long long recurseq(int n,int i,int cnt){
        if(i>n)return 0;
        
        return solve(i,cnt)+recurseq(n,i+1,cnt+i);
    }
    
    long long sequence(int n){
        return recurseq(n, 1, 1);
    }
};

// 6===========================================================================================
class Solution{
public:
    void Solve(int n,vector<int>& v){
        v.push_back(n);
        if(n<=0){
            return;
        }
        
        Solve(n-5,v);
        
        v.push_back(n);
    }

    vector<int> pattern(int N){
        vector<int> v;
        
        Solve(N,v);
        
        return v;
    }
};

// 7=========================================================================================

class Solution {
    public void rec(String s,String curr,List<String> ans){
        if(s.length()==0){
            ans.add(curr);
            return;
        }
        for(int i=0; i<s.length(); i++){
            char c=s.charAt(i);
            String ts=s.substring(0,i)+s.substring(i+1);
            rec(ts,curr+c,ans);
        }
        
    }
    public List<String> find_permutation(String S) {
        List<String> ans=new ArrayList<>();
        rec(S,"",ans);
        Collections.sort(ans);
        return ans;
    }
}
// 8=========================================================================================

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        
        double y = myPow(x,n/2);
        if(n%2==0){
            
            return y*y;
            
        }
        else{
            return n < 0 ? 1/x*y*y : x*y*y; 
        }
    }
};
