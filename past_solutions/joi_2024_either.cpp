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
    long long n,a,b;
    cin>>n>>a>>b;
    long long gcd_num = std::gcd(a,b);
    long lcm = a*b/gcd_num;
    long a_c = n/a;
    long b_c = n/b;
    long c_c = n/lcm;
    cout<<a_c+b_c-c_c*2;
}