#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    long s,a,b;
    cin>>s>>a>>b;
    long n = s-a;
    long sum = 250;
    while(n > 0){
        n-=b;
        sum+=100;
    }
    cout<<sum;
}