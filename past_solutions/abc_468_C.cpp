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
    long n;
    cin>>n;
    vector<long>q,p;
    vector<long> pow;
    long pow_num= 1;
    for(int i = 1; i < 12;i++){
        pow_num *= i;
        pow.push_back(pow_num);
    }
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        p.push_back(num);
    }
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        q.push_back(num);
    }
    long p_num=0,q_num=0;
    vector<long>p_bi,q_bi;
    vector<long>chart(n+1);
    for(int i = 1; i < n+1;i++){
        chart[i]=i-1;
    }
    for(int i = 0; i < n-1;i++){
        long now = p[i];
        p_num += (pow[n-i-2])*(chart[now]);
        chart[now]=0;
        for(int j = now;j < n+1;j++){
            if(chart[j]!=0){
                chart[j]--;
            }
        }
    }
    for(int i = 1; i < n+1;i++){
        chart[i]=i-1;
    }
    for(int i = 0; i < n-1;i++){
        long now = q[i];
        q_num += (pow[n-i-2])*(chart[now]);
        chart[now]=0;
        for(int j = now;j < n+1;j++){
            if(chart[j]!=0){
                chart[j]--;
            }
        }
    }
    long ans = q_num-p_num-1;
    if(ans < 0){
        ans = 0;
    }
    cout<<ans;
}