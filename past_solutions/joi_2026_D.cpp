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
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    long ans = 0;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1;j < n;j++){
            if(a[i]%a[j]==0){
                ans++;
            }
        }
    }
    cout<<ans;
}