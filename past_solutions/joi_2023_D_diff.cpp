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

int main()
{
    long k,n;
    cin>>k>>n;
    vector<long>a;
    vector<long>b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    long m;
    cin>>m;
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    long count=0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(a[i]+k==b[j]){
                count++;
            }
        }
    }
    cout<<count;
}