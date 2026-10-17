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

vector<vector<long>> answer;
long num = 0;
void number(long k){
    num = k;
}
void check(vector<long> a, long b,long m,long sum){
    a.push_back(b);
    if(m==1){
        if((num-sum)%(a.size()+1)==0){
            a.push_back((num-sum)/(a.size()+1));
            answer.push_back(a);
        }
    }
    else{
        for(int i = 0; i < num+1;i++){
            if(sum+i*(a.size()+1) > num)continue;
            check(a,i,m-1,sum+i*(a.size()+1));
        }
    }
}

int main()
{
    long n,k;
    cin>>n>>k;
    number(k);
    if(n==1){
        answer.push_back({k});
    }
    else{
        for(int i = 0; i < k+1;i++){
       check({},i,n-1,i);
        }
    }
    for(int i = 0; i < answer.size();i++){
        vector<long>ans = answer[i];
        for(int i = 0; i < n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}