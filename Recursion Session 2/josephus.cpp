// https://practice.geeksforgeeks.org/problems/josephus-problem/1

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int josephus(int n, int k)
    {
       if (n == 1)
            return 1;
        else
            return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};

