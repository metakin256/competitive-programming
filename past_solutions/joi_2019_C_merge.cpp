#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
    long inf = 1<<30;
    long n,m;
    cin>>n>>m;
    vector<long> a;
    vector<long> b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    a.push_back(inf);
    b.push_back(inf);
    long a_num=0,b_num=0;
    for(int i = 0; i < n+m; i++){
        if(a[a_num] < b[b_num]){
            cout<<a[a_num]<<"\n";
            a_num++;
        }
        else{
            cout<<b[b_num]<<"\n";
            b_num++;
        }
    }
}