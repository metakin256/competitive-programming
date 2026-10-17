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
    ll max_num=1000000000000000000;
    ll a,b;
    cin>>a>>b;
    ll gcd_num = gcd(a,b);
    ll lcm_num = lcm(a,b);
    if(a/gcd_num<=max_num/b){
        cout<<lcm_num;
    }
    else{
        cout<<"Large";
    }
}