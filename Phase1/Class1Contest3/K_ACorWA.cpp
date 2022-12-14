// Problem link - https://vjudge.net/contest/468964#problem/K

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
// My Code Starts Here         
    int n, m;
    cin >> n >> m;

    if(n == m) cout << "Yes";
    else cout << "No";

    return 0;
}