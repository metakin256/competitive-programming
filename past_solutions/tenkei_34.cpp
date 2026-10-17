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

int main()
{
    long n,k;
    cin>>n>>k;
    vector<long>a(n);
    for(int i = 0;i < n;i++)cin>>a[i];
    map<long,long>dic;
    long kind = 0;
    long r=0,answer=0;
    for(int i = 0; i < n;i++){
       while(r<n){
            dic[a[r]]++;
            if(dic[a[r]]==1)kind++;
            r++;
            if(kind>k)break;
            answer=max(answer,r-i);
        }
        dic[a[i]]--;
        if(dic[a[i]]==0)kind--;
    }
    cout<<answer;
}