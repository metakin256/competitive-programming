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
    long max_a=0,max_b=0;
    map<long,long>dic;
    for(int i = 0; i < 16;i++){
        long num;
        cin>>num;
        max_a=max(max_a,num);
        dic[num]=i+1;
    }
    for(int i = 0; i < 16;i++){
        long num;
        cin>>num;
        max_b=max(max_b,num);
        dic[num]=i+17;
    }
    cout<<dic[min(max_a,max_b)];
}