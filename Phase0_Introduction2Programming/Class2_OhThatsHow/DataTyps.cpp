// Problem link - 

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <vector>

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

    int i;
    cin >> i;
    cout << "the value of the integer i = " << i << nl;

    long long l;
    cin >> l;
    cout << "the value of the long long l = " << l << nl;

    char c;
    cin >> c;
    cout << "the value of character c = " << c << nl;

    float f;
    cin >> f;
    cout << "the value of the float f = " << f << nl;

    double d;
    cin >> d;
    cout << "the value of the double d = " << d << nl;

    return 0;
}