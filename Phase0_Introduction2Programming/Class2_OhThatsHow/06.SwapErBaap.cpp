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

    int a, b, c;
    
    cin >> a >> b >> c;
    
    int temp = a;
    a = b;
    b = temp;

    temp = b;
    b = c;
    c = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
