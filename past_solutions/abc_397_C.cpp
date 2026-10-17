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
    map<long,long>p,q;
    long kind_p=0,kind_q=0;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        p[num]++;
        if(p[num]==1){
            kind_p++;
        }
    }
    long answer = kind_p;
    for(int i = 0; i < n;i++){
        q[a[i]]++;
        p[a[i]]--;
        if(p[a[i]]==0){
            kind_p--;
        }if(q[a[i]]==1){
            kind_q++;
        }
        answer = max(answer,kind_p+kind_q);
    }
    cout<<answer;
}   