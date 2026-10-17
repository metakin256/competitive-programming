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
    long n,k;
    cin>>n>>k;
    vector<long> nums(k+1),think(n+1);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        nums[num]++;
    }
    long max_num=0;
    for(int i = 1; i < k+1;i++){
        if(max_num<nums[i]){
            max_num=nums[i];
        }
        think[nums[i]]++;
    }
    long ans = think[max_num]+think[max_num-1];
    cout<<ans;
}