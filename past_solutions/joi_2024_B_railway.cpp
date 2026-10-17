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
    long p,q,a,b;
    cin>>q>>p>>a>>b;
    long sum = 0;
    if(q > p){
        sum += p*a;
    }
    else{
        sum += q*a+ (p-q)*b;
    }
    cout<<sum;
}