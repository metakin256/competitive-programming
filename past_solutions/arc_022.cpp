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
    long n;
    cin>>n;
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    long answer = 0;
    long r = 0;
    map<long,long>dic;
    long kind = 0;
    for(int i = 0; i < n;i++){
        while(r<n&&dic[a[r]]!=1){
            dic[a[r]]++;
            r++;
            kind++;
        }
        answer = max(answer,kind);
        dic[a[i]]--;
        kind--;
    }
    cout<<answer<<"\n";
}