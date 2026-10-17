//これもパス
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
#include <unordered_set>//ハッシュセットの使用に必要

using namespace std;

using ll = long long;
using str = string;

int main()
{
    long n,k;
    cin>>n>>k;
    vector<long>a,b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        b.push_back(num);
    }
    sort(b.begin(),b.end());
    long max = 0,min = -1;
    for(int i = 0; i < n;i++){
        if(a[i]!=b[i]){
            if(min==-1)min = i;
            max = i;
        }
    }
    if(min==-1) min = 0;
    long c = max-min;
    if(c < k)cout<<"Yes";
    else cout<<"No";
}