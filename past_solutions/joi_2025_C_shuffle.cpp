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
    long n;
    cin>>n;
    vector<long>a;
    vector<long>b;
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
    for(int i = 0; i < n;i++){
        cout<<a[i]<<"\n"<<b[i]<<"\n";
    }
}