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
    long n;
    cin>>n;
    map<long,long> nums;
    vector<long> list;
    for(int i = 0; i < n; i++){
        long a;
        cin>>a;
        nums[a]++;
        list.push_back(a);
    }
    long now = 1;
    for(int i = 0;i < 1001;i++){
        if(nums.count(i)){
            long count =nums[i];
            nums[i]=now;
            now+=count;
        }
    }
    for(int i = 0; i < n;i++){
        cout<<nums[list[i]]<<"\n";
    }
}