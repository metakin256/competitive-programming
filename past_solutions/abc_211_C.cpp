#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include<stack>

using namespace std;

int main()
{
    long mod = 1000000007;
    string s;
    cin>>s;
    long long c=0,h=0,o=0,k=0,u=0,d=0,a=0,i=0;
    long long answer = 0;
    for(int j = 0; j < s.length();j++){
       if (s[j] == 'c') c = (c + 1) % mod;
        if (s[j] == 'h') h = (h + c) % mod;
        if (s[j] == 'o') o = (o + h) % mod;
        if (s[j] == 'k') k = (k + o) % mod;
        if (s[j] == 'u') u = (u + k) % mod;
        if (s[j] == 'd') d = (d + u) % mod;
        if (s[j] == 'a') a = (a + d) % mod;
        if (s[j] == 'i') i = (i + a) % mod;
    }
    cout<<i;
}