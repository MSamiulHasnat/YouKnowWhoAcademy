// Problem link - https://vjudge.net/contest/468964#problem/I

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
    int a, b, c;
    cin >> a >> b >> c;
    if(a*a + b*b < c*c) cout << "Yes";
    else cout << "No";

    return 0;
}