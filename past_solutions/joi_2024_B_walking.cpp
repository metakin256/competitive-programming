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
    long x;
    cin>>x;
    long num = x/2;
    if(x%2==1){
        num+=3;
    }
    cout<<num;
}