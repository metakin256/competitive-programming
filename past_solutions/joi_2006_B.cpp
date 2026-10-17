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
    long n,k;
    cin>>n>>k;
    vector<long> a;
    bool zero=false;
    for(int i = 0; i < k;i++){
        long num;
        cin>>num;
        a.push_back(num);
        if(num == 0){
            zero = true;
        }
    }
    sort(a.begin(),a.end());
    long answer = 0;
    if(zero){
        vector<long> nums(100001);
        for(int i = 0; i < k;i++){
            nums[i]++;
        }
        long now = 0;
        vector<long>len,inter;
        for(int i = 0; i < 100001;i++){
            if(nums[i]==1){
                now++;
            }
            else{
                len.push_back(now);
                now = 1;
            }
        }
    }
    else{
        long now = 1;
        for(int i = 1; i < k;i++){
            if(a[i]-a[i-1]==1){
                now++;
            }
            else{
                answer = max(answer,now);
                now = 1;
            }
        }
        answer = max(answer,now);
    }
    cout<<answer;
}