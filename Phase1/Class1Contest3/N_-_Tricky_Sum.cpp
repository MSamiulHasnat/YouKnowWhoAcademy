// Problem link - https://vjudge.net/contest/468964#problem/N
// Not solved yet

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
    int tc;
    cin >> tc;
    
    while(tc--){
        long long n, add = 0, p; 
        cin >> n;

        int sum = n * (n + 1) / 2;
        for(int i = 1; i <= n; i *= 2){
            add += i;
            if(i > n) break;
        }
        cout << sum + add*-1 << nl;
    }
    


    return 0;
}