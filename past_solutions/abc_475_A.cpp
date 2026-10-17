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
    cout<<s[0];
    for(int i = 0; i < s.length()-1;i++){
        cout<<"o"<<s[i+1];
    }
}