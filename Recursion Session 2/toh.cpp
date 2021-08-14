#include<bits/stdc++.h>
using namespace std;

void toh(int n, int from, int to, int helper) {
    if(n==1){
        cout<<"moving disc " <<n<<" from "<< from << " to "<< to<<"\n";
        return;
    }

    toh(n-1,from,helper,to);

    cout<<"moving disc " <<n<<" from "<< from << " to "<< to<<"\n";

    toh(n-1,helper,to,from);
}

int main(){
    int n=3;
    toh(n,1,3,2);
}