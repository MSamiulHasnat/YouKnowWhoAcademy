// Problem link - https://vjudge.net/contest/468964#problem/C

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
    int a, b;
    cin >> a >> b;

    int maax = max(a,b);
    int miin = min(a,b);

    int sum1 = maax + (maax - 1);
    int sum2 = maax + miin;

    if(sum1 > sum2) {
        cout << sum1;
    }
    else cout << sum2;

    return 0;
}