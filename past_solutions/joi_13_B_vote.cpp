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
    long n,m;
    cin>>n>>m;
    vector<long> value;
    vector<long> nums(n+1);
    long answer = 0;
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        value.push_back(num);
    }
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        for(int i = 0; i < n;i++){
            if(value[i] <= num){
                nums[i]++;
                break;
            }
        }
    }
    long max_num;
    for(int i = 0; i < n+1;i++){
        if(nums[i] > max_num){
            max_num = nums[i];
            answer = i+1;
        }
    }
    cout<<answer<<"\n";
}