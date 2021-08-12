
#include <bits/stdc++.h>
using namespace std;

int countOfDigits(int n) {
  // base case
  if(n==0) return 0;

  // recursion work
  int small_ans = countOfDigits(n/10);

  // my-work
  int ans = 1+small_ans;

  return ans;

}

int sumOfDigits(int n) {
  // base case
  if(n==0) return 0;

  // recursion work
  int small_ans = sumOfDigits(n/10);

  // my-work
  int ans = n%10 + small_ans;

  return ans;
}

// 0 1 1 2 3 5 8 13 21...
int nthFibonacci(int n) {
  // base case
  if(n == 0 || n == 1) return n;

  // recursion work
  int prev_fib = nthFibonacci(n-2);
  int prevprev_fib = nthFibonacci(n-1);

  // my-work
  int ans = prev_fib + prevprev_fib;

  return ans;
}
/*

f(n) = f(n-1) + f(n-2)

tn = tn-1 + tn-2 , tn-1~tn-2
tn = 2*tn-1 
               , tn-1 = tn-2+tn-3 = 2*tn-2
tn = 2*2*tn-2
                , tn-2 = tn-3+tn-4 = 2*tn-3
tn = 2*2*2*tn-3

                 n-k = 0
                 n = k 
tn = 2^k*tn-k     
tn = 2^n       

*/


//D E SI R E
//e + rised //o(n)

//TC = no. of recursive calls * time taken in 1 call

void reverseString(string &s, int lo, int hi){
 // base case
  if(lo >= hi) return;

  // recursion work
  reverseString(s,lo+1,hi-1);

  // my-work
  swap(s[lo],s[hi]);
}

void reverseString(string &s) {
  reverseString(s,0,s.size()-1);
}

//NITIN = NITIN
//DESIRE != DESIRE
//MOMO != OMOM
bool isPalindrome(string &s, int lo, int hi){
  if(lo >= hi) return 1;

  if(s[lo] == s[hi] && isPalindrome(s,lo+1,hi-1)) return 1;

  return 0;
}

bool isPalindrome(string &s){
    return isPalindrome(s,0,s.size()-1);
}

//aabbdddef = abdef
// TC = n*n
string removeDuplicates(string s) {
  // base case
  if(s.size() <= 1) return s;

  // recursion work
  string small_ans = removeDuplicates(s.substr(1));

  // my-work
  if(s[0] == small_ans[0]) return small_ans;
 
  return s[0] + small_ans;
}

int nonConsecutiveOnes(int n){
  // base case
  if(n==1) return 2;
  if(n==2) return 3;

  // recursion work
  return nonConsecutiveOnes(n-1)+nonConsecutiveOnes(n-2);
}

int StairCase(int n){
  // base case
  if(n < 0) return 0;
  if(n==0) return 1;  
  // recursion work
  return StairCase(n-1) + StairCase(n-2);

  // my-work
  return 0;
}

bool isPowerOfTwo(int n) {
     // base case

     // recursion work
   return 0;
     // my-work
}

int main() {
    cout << "countOfDigits: " << countOfDigits(54162);
    cout << "\n\nsumOfDigits: " << sumOfDigits(54162);
    cout << "\n\nnth Fibonacci: " << nthFibonacci(6);
  
    string s = "DESIRE";
    cout << "\n\nOriginal String: " << s;
    reverseString(s);
    cout << "\n\nreversedString: " << s;
    string s2 = "NITIN";
    cout << "\n\nisPalindrome: " << s << " "  << isPalindrome(s);
    cout << "\n\nisPalindrome: " << s2 << " " << isPalindrome(s2);
    // printSubsets("abc");
    cout << "\n\nremoveDuplicates: " << removeDuplicates("abcddcba");
    // cout << "\n\ncountNonConsecutiveOnes" << countNonConsecutiveOnes(5);
    // cout << "\n\nstairCase" << stairCase(5);

  return 0;
}