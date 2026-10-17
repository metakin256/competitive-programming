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

using ll = long long;
using str = string;

int main()
{
    str s;
    cin>>s;
    long s_len = s.length();
    for(int i = 0; i < s_len;i++){
        if(s[i]=='A'){
            cout<<s[i];
        }
        else cout<<'.';
    }
}