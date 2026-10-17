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
    long a,b;
    cin>>a>>b;
    map<long,long> dic;
    dic[a]++;
    dic[b]++;
    for(int i = 0; i < 3;i++){
        if(dic[i]==0){
            cout<<i;
            return 0;
        }
    }
}