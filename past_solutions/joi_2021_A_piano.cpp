#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    long n;
    cin>>n;
    vector<long>nums;
    for(int i = 0; i < n;i++){
        long a;
        cin>>a;
        nums.push_back(a);
    }
    long min = *min_element(nums.begin(),nums.end());
    long max = *max_element(nums.begin(),nums.end());
    long sum = 0;
    for(int i = 0; i < n;i++){
        sum+=nums[i];
    }
    sum -= min+max;
    cout<<sum;
}