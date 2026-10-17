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
using str = string;

int main()
{
    long n,k;
    cin>>n>>k;
    vector<long>a_sum;
    a_sum.push_back(0);
    long sum_num;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        sum_num+=num;
        sum_num%=k;
        a_sum.push_back(sum_num);
    }
    long now = 0;
    map<long,long>last_num;
    vector<long> check(k+1);
    long answer = 0;
    for(int i = 0; i < n+1;i++){
        if(last_num[a_sum[i]]==0){
            check[a_sum[i]]=now;
            last_num[a_sum[i]]++;
        }
        else{
            last_num[a_sum[i]]--;
            check[a_sum[i]]++;
            answer = max(answer,check[a_sum[i]]+1);
        }
    }
    cout<<answer;
}   