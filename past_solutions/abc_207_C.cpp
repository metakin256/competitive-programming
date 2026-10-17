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
    long long a,b;
    cin>>a>>b;
    long long num_gcd = gcd(a,b);
    long count = 1;
    long roop = num_gcd;
    for(long long i = 2; i*i <= num_gcd;i++){
        if(num_gcd%i==0)count++;
        while(num_gcd%i==0){
            num_gcd/=i;
        }
        if(num_gcd==1) break;
    }
    if (num_gcd > 1) {
        count++;
    }
    cout<<count;
}