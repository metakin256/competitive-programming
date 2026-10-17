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
    vector<long>a,b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    long point = -1;
    long count = 0;
    for(int i = 0; i < n;i++){
        if(a[i]>b[i]&&point==-1){
            point = i;
        }
    }
    ll inf = ll(1)<<56;
    if(point ==-1){
        cout<<"No";
    }
    else{
        cout<<"Yes"<<"\n";
        for(int i=0; i < n;i++){
            if(i==point){
                cout<<inf;
            }
            else{
                cout<<1;
            }
            cout<<" ";
        }
    }
}   