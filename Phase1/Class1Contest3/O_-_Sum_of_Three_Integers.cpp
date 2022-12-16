// Problem link - https://vjudge.net/contest/468964#problem/O

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

    int k, s;
    cin >> k >> s;

    int count = 0;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            int z = s - i - j;
                if(z >= 0 && z <= k){
                count++;
                }
        }
    }
    cout << count;


    return 0;
}