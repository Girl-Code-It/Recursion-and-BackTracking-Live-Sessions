/*

Subsets are zero or more elements from a group of elements.

S = {1, 2, 3}

Output - {1, 2, 3}, {1, 2}, {1, 3}, {1}, {2, 3}, {2}, {3} , {}

            1 2 3
          ----------
            1 2 3
            1 2 
            1   3
            1
              2 3
              2 
                3
            

No. of subsets of n size array = 2^n 
How? 
Every element has 2 choices = 2*2*2*2... = 2^n

For this consider all elements will be unique

*/


#include<bits/stdc++.h>
using namespace std;

void printSubsetsHelper(vector<int> &nums, vector<int> &chosen, int startIdx){
    // base case
    if(startIdx >= nums.size()){
        for(auto &e : chosen) cout << e << " ";
        cout << "\n";
        return;
    }

    int curr_elt = nums[startIdx];

    //For current element, we have 2 choices

    //Choice 1: Keep curr elt in chosen/ans
    chosen.push_back(curr_elt);   //[1]
    printSubsetsHelper(nums,chosen,startIdx+1);

    //Choice 2: Don't Keep curr elt in chosen/ans
    chosen.pop_back();
    printSubsetsHelper(nums,chosen,startIdx+1);
}


void printSubsets(vector<int> &nums){
   vector<int> chosen;
   printSubsetsHelper(nums,chosen,0);
}

int main(){
    vector<int> nums = {1,2,3,4};
    printSubsets(nums);
}


/*
1,2,3
1,2
1,3
1

2,3
2

3


*/
