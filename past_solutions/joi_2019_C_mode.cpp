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
    vector<long> nums(m+1);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        nums[num]++;
    }
    long answer = 0;
    for(int i = 0; i < m+1;i++){
        if(answer < nums[i]){
            answer = nums[i];
        }
    }
    cout<<answer;
}