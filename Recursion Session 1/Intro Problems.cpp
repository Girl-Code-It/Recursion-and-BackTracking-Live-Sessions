
#include<bits/stdc++.h>
using namespace std;

void print1toN(int n){ // 1,2,3,4,5
    if(n == 0) return;
    print1toN(n-1); //1,2,3,4
    cout << n << " "; //5
}

void printNto1(int n){  //5 4 3 2 1
    if(n == 0) return;
    cout << n << " "; //5
    printNto1(n-1);  //4 3 2 1
}

// 5! = 5*4*3*2*1
int factorial(int n){
    if(n==0) return 1;
    int small_ans = factorial(n-1); //4*3*2*1 = 24
    int ans = n*small_ans;
    return ans;
}


int main(){
   cout << "1 to N\n";
    print1toN(5);

    cout << "\n\nN to 1\n";
    printNto1(5);

    cout << "\n\nFactorial\n" << factorial(5);
    return 0;
}