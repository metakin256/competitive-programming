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

vector<long> reverse(long k,vector<long>nums){
    long n = nums.size();
    for(int i = 0; i < n;i++){
        nums[i]=(nums[i]+k)%n;
        if(nums[i]==0){
            nums[i] = n;
        }
    }
    return nums;
}

int main()
{
    ll n,q;
    cin>>n>>q;
    vector<long> nums,trance,answer;
    ll point = 0;
    for(int i = 0; i < n;i++)nums.push_back(i+1);
    for(int i = 0; i < n;i++)trance.push_back(i+1);
    for(int i = 0; i < q;i++){
        long kind;
        cin>>kind;
        if(kind ==1){
            long p,x;
            cin>>p>>x;
            nums[p-1]=x;
        }
        if(kind ==2){
            long p;
            cin>>p;
            answer.push_back(nums[(p+point-1)%n]);
        }
        if(kind ==3){
            long k;
            cin>>k;
            point+=k;
            point%=n;
        }
    }
    for(int i = 0; i < answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}