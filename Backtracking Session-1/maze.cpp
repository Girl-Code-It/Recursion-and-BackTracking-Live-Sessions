/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. 
It has to reach the destination at (N - 1, N - 1). 
Find all possible paths that the rat can take to reach from source to destination. 
The directions in which the rat can move are 
'U'(up), 'D'(down), 'L' (left), 'R' (right). 
Value 0 at a cell in the matrix represents that it is blocked 
and rat cannot move to it while value 1 at a cell in the matrix represents
that rat can be travel through it.

Note: In a path, no cell can be visited more than one time.

1. Find what choice(s) we have at each step. 
   What different options are there for the next step?

2. For each valid choice:
    a) Make it and explore recursively. 
    Pass the information for a choice to the next recursive call(s).
    b) Undo it after exploring. 
    Restore everything to the way it was before making this choice.   

3. Find our base case(s). What should we do when we are out of decisions?     

*/

#include<bits/stdc++.h>
using namespace std;

void printPaths(vector<vector<int>>& maze){
    int r = maze.size();
    int c = maze[0].size(); 
}

int main(){
    vector<vector<int>> maze =  {{1, 0, 0, 0},
                                {1, 1, 0, 1}, 
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};

    printPaths(maze);
}