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

bool check(ll mid,vector<long>prime,vector<long>count){
    for(int i = 0;i < prime.size();i++){
        ll num = 0;
        ll pow = prime[i];
        for(int j = 0; mid/pow!=0;j++){
            num+=mid/pow;
            pow*=prime[i];
        }
        if(num<count[i])return false;
    }
    return true;
} 

int main()
{
    ll n;
    cin>>n;
    long roop = n;
    vector<long>prime,count;
    for(int i = 2;1ll*i*i <= roop;i++){
        if(n%i==0){
            long num = 0;
            while(n%i==0){
                n/=i;
                num++;
            }
            prime.push_back(i);
            count.push_back(num);
        }
    }
    if(n!=1){
        prime.push_back(n);
        count.push_back(1);
    }
    ll l=0,r=100000000LL;
    while(r-l>1){
        ll mid = (l+r)/2;
        if(check(mid,prime,count)){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r<<"\n";
}