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
    long n;
    cin>>n;
    vector<long> nums(101);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        nums[num]++;
        nums[num]%=2;
    }
    long ans = 0;
    for(int i = 0; i < 101;i++){
        ans+=nums[i]*i;
    }
    cout<<ans;
}