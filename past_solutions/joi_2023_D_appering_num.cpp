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
    vector<bool> nums(10);
    for(int i = 0; i < n; i++){
        long a;
        cin>>a;
        if(!nums[a]){
            nums[a]= true;
        }
    }
    for(int i = 0; i < 10;i++){
        if(nums[i]){
        cout<<i<<"\n";
        }
    }
}