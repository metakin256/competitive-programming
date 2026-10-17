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
    string s,t;
    cin>>n>>s>>t;
    long count=0;
    for(int i = 0; i < n;i++){
        if(s[i]!=t[i]){
            count++;
        }
    }
    cout<<count;
}