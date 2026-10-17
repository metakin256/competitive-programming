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
    long n,m;
    cin>>n>>m;
    vector<long>a,a1,b;
    for(int i = 0; i < n;i++){
        long num = 0;
        cin>>num;
        a.push_back(num);
        a1.push_back(num);
    }
    for(int i = 0; i < n-1;i++){
        long num = 0;
        cin>>num;
        b.push_back(num);
    }
    long one=0,two=1;
    a1[0]++;
    for(int i = 0; i < n-1;i++){
        if(b[i]!=(a[i]+a[i+1])%m){
            one++;
            a[i+1]++;
        }
        if(b[i]!=(a1[i]+a1[i+1])%m){
            two++;
            a1[i+1]++;
        }
    }
    long ans = min(one,two);
    cout<<ans;
}