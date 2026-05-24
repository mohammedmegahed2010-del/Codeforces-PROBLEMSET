#include <iostream>
using namespace std;

// Problem Link: https://codeforces.com/problemset/problem/71/A

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    std::string str; short int n;
    cin >> n; 
    for (short int i = 0; i < n; i++){
        cin >> str; 
        if (str.length() > 10){
            cout << str[0] << str.length()-2 << str[str.length()-1] << endl;
        } else{
            cout << str << endl;
        }
    }
    return 0;
}