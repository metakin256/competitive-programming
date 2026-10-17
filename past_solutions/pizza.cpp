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
    long a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    long one = a*x+b*y;
    long num_AB = min(x,y);
    long money = num_AB*c*2;
    money+=a*abs(x-y);
    cout<<min(one,money);
}   