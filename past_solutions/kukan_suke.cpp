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
    vector<pair<long,long>>task;
    for(int i = 0; i < n;i++){
        long a,b;
        cin>>a>>b;
        task.push_back({b,a});
    }
    sort(task.begin(), task.end());
    long count = 0,last=0;
    for(int i = 0; i < n;i++){
        if(task[i].second>last){
            last = task[i].first;
            count++;
        }
    }
    cout<<count;
}   