/*

Write a recursive function diceRoll that accepts an integer
representing a number of 6-sided dice to roll, and output all
possible combinations of values that could appear on the dice.


function diceRolls(dice):
if dice == 0:
    nothing to do.
else:
    //handle all roll values for a single die; let recursion do the rest.
    for each die value i in range [1..6]:
        choose that the current die will have value i.
        diceRolls(dice-1). // explore the remaining dice.
        un-choose the value i.

*/

#include<bits/stdc++.h>
using namespace std;

void diceHelper(int dice, vector<int> &chosen){
    //base case
    if(dice == 0){
        for(int i = 0; i < chosen.size(); i++) cout << chosen[i] << " ";
        cout << "\n";
        return;
    }
    //d1 - 1,2,3,4,5,6
    for(int i = 1; i <= 6; i++){
        chosen.push_back(i);
        diceHelper(dice-1,chosen);
        chosen.pop_back();
    }
}
                                                                    
void diceRolls(int dice){
   vector<int> chosen;
    diceHelper(dice,chosen);
}

int main(){
    diceRolls(3);
}