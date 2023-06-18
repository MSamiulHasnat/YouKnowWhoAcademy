// Problem link - https://vjudge.net/contest/468964#problem/M

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
    int summation, multiplication;
    cin >> summation >> multiplication;

    int count = 0;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                if(i + j + k <= summation && i * j * k <= multiplication){
                    count++;
                }
            }
        }
    }
    cout << count;

    return 0;
}