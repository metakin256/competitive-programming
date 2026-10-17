#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long> little;
    for(int i = 0; i < n;i++){
        long long a;
        cin>>a;
        little.push_back(a);
    }
    sort(little.begin(),little.end(),greater<long>());
    long long sum = 0;
    long count=n-k;
    long ans = -1;
    for(int i = n-k; i < n;i++){
        sum+=little[i];
        count++;
        if(sum >= x){
            ans = count;
            break;
        }
    }
    cout<<ans;
}