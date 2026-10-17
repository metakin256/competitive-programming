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
    vector<long>p,q;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        p.push_back(num);
    }
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        q.push_back(num);
    }
    map<long,long>dic;
    for(int i = 0; i < n;i++){
        dic[q[i]-1]=p[i]-1;
    }
    for(int i = 0; i < n;i++){
        cout<<q[dic[i]]<<" ";
    }
}   