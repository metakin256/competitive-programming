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
    long n,k;
    cin>>n>>k;
    vector<long>c;
    c=input__vec(n);
    map<long,long> log;
    long kind = 0;
    for(int i = 0; i < k;i++){
        log[c[i]]++;
        if(log[c[i]]==1) kind++;
    }
    long answer = kind;
    for(int i = k; i < n;i++){
        log[c[i]]++;
        if(log[c[i]]==1) kind++;
        log[c[i-k]]--;
        if(log[c[i-k]]==0)kind--;
        if(answer < kind) answer = kind;
    }
    cout<<answer;
}