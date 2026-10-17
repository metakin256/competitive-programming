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
    long n,d;
    cin>>n>>d;
    vector<long> a;
    for(int i = 0; i < n*2;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i < 2*n;i+=2){
        if(abs(a[i]-a[i+1])>d){
            cout<<"No"<<"\n";
            return 0;
        }
    }
    cout<<"Yes"<<"\n";
}