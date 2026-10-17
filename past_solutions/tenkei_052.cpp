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
    long mod = 1000000007;
    ll answer = 1;
    for(int i = 0; i < n;i++){
        long sum=0;
        for(int j = 0; j < 6;j++){
            long num;
            cin>>num;
            sum+=num;
        }
        answer=(answer*sum)%mod;
    }
    cout<<answer;
}