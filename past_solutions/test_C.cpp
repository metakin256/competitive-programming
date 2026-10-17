#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    long mod = 998244353;
    string s;
    cin >> s;
    long len = s.length();
    s+=s[len-1];
    long now = 1;
    long sum = 0;
    for(int i = 0;i < len;i++){
        if(s[i]==s[i+1]){
            sum+=(now*(now+1)/2)%mod;
            now = 1;
        }
        else{
            now++;
        }
    }
    cout<<sum;
}
