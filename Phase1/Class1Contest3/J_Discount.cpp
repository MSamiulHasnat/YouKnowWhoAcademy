// Problem link - https://vjudge.net/contest/468964#problem/J

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
    float regular, discount;
    cin >> regular >> discount;

    float difference = regular - discount;


    float sum = difference / regular;

    
    float result = sum * 100;
    cout << result << nl;

    return 0;
}