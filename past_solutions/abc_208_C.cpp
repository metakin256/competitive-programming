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

vector<long> input__vec(long n){
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    return a;
}

int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long>c,c_sorted;
    for(int i = 0;i < n;i++){
        long num;
        cin>>num;
        c.push_back(num);
        c_sorted.push_back(num);
    }
    sort(c_sorted.begin(),c_sorted.end());
    long long number = k%n;
    long long normal = k/n;
    map<long long,long long> dic;
    for(int i = 0; i < n;i++){
        if(i>=number)dic[c_sorted[i]]=normal;
        else dic[c_sorted[i]]=normal+1;
    }
    for(int i = 0;i < n;i++){
        cout<<dic[c[i]]<<"\n";
    }
}