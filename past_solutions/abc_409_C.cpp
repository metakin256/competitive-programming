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
    long n,l;
    cin>>n>>l;
    vector<long> nums(l);
    long now = 1;
    nums[now]++;
    for(int i = 0; i < n-1;i++){
        long num;
        cin>>num;
        now += num;
        now %= l;
        nums[now]++;
    }
    long answer = 0;
    if(l%3==0){
        for(int i = 0; i < l/3;i++){
            answer += nums[i]*nums[i+l/3]*nums[i+l*2/3];
        }
    }
    cout<<answer;
}