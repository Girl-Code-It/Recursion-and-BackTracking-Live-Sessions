//https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-subsequence-official/ojquestion

#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    if(s.size()==0){
        vector<string> base;
        base.push_back(s);
        return base;
    } 
   
   string smallString= s.substr(1);
   vector<string> sans= gss(smallString);
   
   char ch=s[0];
   vector<string> ans;
   // not to add
    for(int i=0; i<sans.size(); i++){
        string str=sans[i];
        string ansString = str;
        ans.push_back(ansString);
    }
    
   
//   to add
    for(int i=0; i<sans.size(); i++){
        string str=sans[i];
        string ansString = ch + str;
        ans.push_back(ansString);
    }
    
    
    return ans;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}