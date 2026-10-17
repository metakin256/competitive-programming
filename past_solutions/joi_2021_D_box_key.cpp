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
    long n,m;
    cin>>n>>m;
    vector<long>a;
    vector<long>keys(2001);
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < m; i++){
        long num;
        cin>>num;
        keys[num]=1;
    }
    long sum = 0;
    for(int i = 0; i < n; i++){
        if(keys[a[i]]==1){
            sum++;
        }
    }
    cout<<sum<<"\n";
}