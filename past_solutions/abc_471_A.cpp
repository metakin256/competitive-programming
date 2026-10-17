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
    ll n;
    cin>>n;
    vector<long>a,inter;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < n-1;i++){
        inter.push_back(a[i+1]-a[i]);
    }
    sort(inter.begin(),inter.end());
    long answer = 0,now=0;
    for(int i = 0; i < n-1;i++){
        now+=inter[i];
        answer += now;
    }
    for(int i = 0; i < n;i++){
        a[i]=abs(a[i]);
    }
    answer+=*min_element(a.begin(),a.end());
    cout<<answer;
}