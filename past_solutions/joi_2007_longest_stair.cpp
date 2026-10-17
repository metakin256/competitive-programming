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
    bool zero = false;
    vector<long> nums(n+1);
    for(int i = 0; i < k;i++){
        long num;
        cin>>num;
        if(num == 0){
            zero = true;
        }
        else{
            nums[num]++;
        }
    }
    long answer = 0;
    if(zero){
        long now = 0;
        vector<long>lens(n+2);
        for(int i = 0; i < n+1;i++){
            if(nums[i]==0){
                now = 0;
            }
            else{
                now++;
            }
            if(lens[i]<now){
                lens[i]=now;
            }
        }
        now = 0;
        for(int i = n;i > 0;i--){
            if(nums[i]==0){
                now = 0;
            }
            else{
                now++;
            }
            if(lens[i]<now){
                lens[i]=now;
            }
        }
        for(int i = 1; i < n+1;i++){
            if(lens[i]==0){
                long ans = lens[i+1]+lens[i-1]+1;
                if(answer < ans){
                    answer = ans;
                }
            }
        }
    }
    else{
        long now = 0;
        for(int i = 0; i < n+1;i++){
            if(nums[i]==0){
                if(now > answer){
                    answer = now;
                }
                now = 0;
            }
            else{
                now++;
            }
        }
        if(now > answer){
            answer = now;
        }
    }
    cout<<answer;
}