#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
    long x,y,n;
    cin>>x>>y>>n;
    long set_num = n/2;
    long one = n % 2;
    cout<<one*x+set_num*y*2;
}