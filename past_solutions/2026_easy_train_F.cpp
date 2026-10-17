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
    long n,a,b;
    string s;
    cin>>n>>a>>b>>s;
    vector<long>a_nums,b_nums;
    a_nums.push_back(0);
    b_nums.push_back(0);
    long a_now=0,b_now=0;
    for(int i = 0; i <n;i++){
        if(s[i]=='a'){
            a_now++;
        }
        else{
            b_now++;
        }
        a_nums.push_back(a_now);
        b_nums.push_back(b_now);
    }
    long r=0;
    long long answer=0;
    for(int i = 0; i < n;i++){
        while(a > a_nums[r]-a_nums[i+1]&&b>=b_nums[r]-b_nums[i+1]){
            r++;
        }
        if(a <= a_nums[r]-a_nums[i+1]&&b > b_nums[r]-b_nums[i+1]){
            answer += r-i;
        }
        if(r == i){
            r++;
        }
    }
    cout<<answer;
}