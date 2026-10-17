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

int main()
{
    long n;
    cin>>n;
    long number = 200000;
    vector<long> nums(number+1);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        nums[num]=1;
    }
    for(int i = 0; i < number-5;i++){
        if(nums[i]==1&&nums[i+3]==1&&nums[i+6]==1){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}