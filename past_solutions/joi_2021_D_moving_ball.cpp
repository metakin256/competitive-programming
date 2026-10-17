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
    vector<long>num(n+1);
    for(int i = 0; i < m;i++){
        long x,y;
        cin>>x>>y;
        num[x]=y;
    }
    for(int i = 1; i < n+1;i++){
        long answer = num[i];
        if(answer == 0){
            answer = i;
        }
        cout<<answer<<"\n";
    }
}