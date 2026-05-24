#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/problemset/problem/4/A

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    short int w;
    cin >> w;
    if (w!=2){
        cout << (w%2 == 0 ? "YES" : "NO");
    } else {
        cout << "NO";
    }
    // cout << (w!=2 ? (w%2 == 0 ? "YES" : "NO") : "NO");
    return 0;
}