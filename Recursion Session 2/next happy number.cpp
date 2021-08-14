// https://practice.geeksforgeeks.org/problems/next-happy-number4538/1/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(int N){
        if(N<=10){
            if(N==1 || N==7 || N==10){
                return true;
            }
            return false;
        }
        
        
        int sum=0;
        while(N>0){
            int t=N%10;
            sum+=(t*t);
            N/=10;
        }
        return check(sum);
    }
    int nextHappy(int N){
        for(int i=N+1; ; i++){
            if(check(i)){
                return i;
            }
        }
        return 0;
    }
};