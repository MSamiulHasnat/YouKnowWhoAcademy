// Problem link - https://vjudge.net/contest/468964#problem/E

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
    int a;
    int arr[4];

    cin >> a;

    for (int i = 3; i >= 0; i--){
        arr[i] = a%10;
        a/=10;
    }

    for(int i = 0; i <= 3; i++){
        cout << arr[i];
    }
    
    return 0;
}