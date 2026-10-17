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
    long n,m;
    cin>>n;
    vector<long> a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    cin>>m;
    vector<bool> check(1001);
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        check[num] = true;
    }
    long ans = 0;
    for(int i = 0; i < n;i++){
        ans+= a[i];
        if(check[ans]){
            ans = 0;
        }
    }
    cout<<ans;
}