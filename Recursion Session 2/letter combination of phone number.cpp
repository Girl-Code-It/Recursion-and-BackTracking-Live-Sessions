// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> charArray={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> rec(string& digits){
        if(digits.size()==0){
            vector<string> base;
            base.push_back("");
            return base;
        }
        
        string smallString=digits.substr(1);
        
        vector<string> smallAns=rec(smallString);
        
        vector<string> myAns;
        char ch=digits[0];
        
        string str=charArray[ch-'0'];
        
        for(int i=0; i<str.size(); i++){
            char toAdd=str[i];
            for(int j=0; j<smallAns.size(); j++){
                string curr=toAdd+smallAns[j];
                myAns.push_back(curr);
            }
        }
        
        return myAns;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        return rec(digits);
    }
};