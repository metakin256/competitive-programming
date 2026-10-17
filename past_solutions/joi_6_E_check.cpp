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
    long a,b,c,n;
    cin>>a>>b>>c>>n;
    vector<long> nums(a+b+c+1);
    for(int i = 1; i < a+b+c+1;i++){
        nums[i]=2;
    }
    vector<vector<long>>seat;
    for(int i = 0; i < n;i++){
        long l,k,j,h;
        cin>>l>>k>>j>>h;
        if(h==1){
            nums[l]=1;
            nums[k]=1;
            nums[j]=1;
        }
        else{
            seat.push_back({l,k,j});
        }
    }
    for(int i = 0;i < seat.size();i++){
        if(nums[seat[i][0]]==1&&nums[seat[i][1]]==1){
            nums[seat[i][2]]=0;
        }
        if(nums[seat[i][2]]==1&&nums[seat[i][1]]==1){
            nums[seat[i][0]]=0;
        }
        if(nums[seat[i][0]]==1&&nums[seat[i][2]]==1){
            nums[seat[i][1]]=0;
        }
    }
    for(int i = 1; i < a+b+c+1;i++){
        cout<<nums[i]<<"\n";
    }
}