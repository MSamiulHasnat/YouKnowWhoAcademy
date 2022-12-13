// Problem link - https://vjudge.net/contest/468964#problem/G

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
    int a, b, c, x, count = 0;
    cin >> a >> b >> c;

    for(int i = 1; i < 1000; i++){
        x = c * i;
        if(x >= a && x <= b){
            count++;
            break;
        }
    }
    if(count == 0) cout << "-1";
    else cout << count * x;
    return 0;
}