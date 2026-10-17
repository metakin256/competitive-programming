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
    long mod = 1000000007;
    long n;
    cin>>n;
    vector<long> c = input__vec(n);
    sort(c.begin(),c.end());
    long long answer = 1;
    for(int i = 0; i < n;i++){
        answer *= c[i]-i;
        answer%=mod;
    } 
    cout<<answer;
}