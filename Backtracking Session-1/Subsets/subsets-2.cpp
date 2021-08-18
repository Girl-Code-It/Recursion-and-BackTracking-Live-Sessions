#include<bits/stdc++.h>
using namespace std;

void subsetHelper(vector<int> &nums, vector<int> &chosen, int startIdx){
    for(auto &e : chosen) cout << e << " ";
        cout << "\n";

    //base case
    if(startIdx == nums.size()){
        return;
    }

    for(int i = startIdx; i < nums.size(); i++){
        chosen.push_back(nums[i]);
        subsetHelper(nums,chosen,i+1);
        chosen.pop_back();
    }
}

void printSubsets(vector<int> &nums){
    vector<int> chosen;
    subsetHelper(nums,chosen,0);
}

int main(){
    vector<int> nums = {1,2,3,4};
    printSubsets(nums);
}