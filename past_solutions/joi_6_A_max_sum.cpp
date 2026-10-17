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
    long n,s;
    cin>>n>>s;
    vector<long> a;
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    long now=0;
    for(int i = 0; i < s;i++){
        now+= a[i];
    }
    long answer = now;
    for(int i = 0; i < n-s;i++){
        now -= a[i];
        now += a[i+s];
        if(answer < now){
            answer = now;
        }
    }
    cout<<answer<<"\n";
}