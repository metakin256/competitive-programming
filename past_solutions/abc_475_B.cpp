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
    long n;
    cin>>n;
    vector<long>ans(3);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        num%=1000;
        if(num==0)num = 1000;
        long get = 1000 - num;
        long pow = 100;
        for(int i = 0; i < 3;i++){
            long coin = get /pow;
            ans[2-i] +=coin;
            get-=coin*pow;
            pow/=10;
        }
    }
    for(int i = 0; i < 3;i++){
        cout<<ans[i]<<" ";
    }
}