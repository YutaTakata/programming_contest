#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;


int main(){
    string S;
    cin >> S;
    if(S == "SUN") cout << 7 << endl;
    if(S == "MON") cout << 6 << endl;
    if(S == "TUE") cout << 5 << endl;
    if(S == "WED") cout << 4 << endl;
    if(S == "THU") cout << 3 << endl;
    if(S == "FRI") cout << 2 << endl;
    if(S == "SAT") cout << 1 << endl;
}