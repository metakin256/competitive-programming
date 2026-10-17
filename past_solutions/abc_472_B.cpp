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
    vector<long>l;
    long a=0,b=0;
    for(int i = 0;i<n;i++){
        long num;
        cin>>num;
        l.push_back(num);
        a+=num;
    }
    long answer=1<<30;
    for(int i = 0; i < n;i++){
        a-=l[i];
        b+=l[i];
        answer=min(answer,abs(a-b));
    }
    cout<<answer;
}