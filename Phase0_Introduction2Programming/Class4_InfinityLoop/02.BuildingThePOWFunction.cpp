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

    int a, b;
    cin >> a >> b;

    //using for loop

    int result = 1;
    for(int i = 0; i < b; i++){
        result = result * a;

    }
    cout << result << nl;

    //using while loop

    int result2 = 1;
    while(b--){
        result2 = result2 * a;
    }
    cout << result2 << nl;

    return 0;
}