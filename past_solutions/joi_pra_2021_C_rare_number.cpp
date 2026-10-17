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
    vector<long> nums(2001);
    for(int i = 0; i < n;i++){
        long a;
        cin>>a;
        nums[a]++;
    }
    long min = n+1;
    long ans = 0;
    for(int i = 0; i < 2001;i++){
        if(nums[i]!=0){
            if(nums[i] < min){
                min = nums[i];
                ans = i;
            }
        }
    }
    cout<<ans;
}