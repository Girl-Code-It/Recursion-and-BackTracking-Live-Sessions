/*

Question:
    input: abc
    output: 
        abc
        acb
        bac
        cab
        bca
        cba

Recursive Thinking: 
    1. Base case
    2. Smaller problem - Recursive Work - Leap of Faith
    3. My work 

substr(i,k) = starting from index i, string of length k, i.e substring(i,i+k-1)
substr(k) = substring from index k till end

s = CODING
    012345

s.substr(2,3) = DIN
s.substr(2) = DING

*/

#include<bits/stdc++.h>
using namespace std;

//osf = output so far

void permute(string ip){
    
}

int main(){
    permute("abc");
    return 0;
}