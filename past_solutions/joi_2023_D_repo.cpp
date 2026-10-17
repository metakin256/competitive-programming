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
    long x,n;
    cin>>x>>n;
    long count=0;
    while(x < n){
        count++;
        if(x%3==0){
            x+=1;
            continue;
        }
        if(x%3==1){
            x*=2;
            continue;
        }
        if(x%3==2){
            x*=3;
            continue;
        }
    }
    cout<<count;
}