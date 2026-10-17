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
    long min_num = 1<<30;
    vector<long> a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        min_num = min(min_num,num);
    }
    long count = 0;
    for(int i = 0;i < n;i++){
        if(a[i]==min_num){
            count++;
            min_num++;
        }
    }
    cout<<count;
}   