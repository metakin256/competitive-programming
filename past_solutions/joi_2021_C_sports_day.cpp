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
    long n,k;
    string s;
    cin>>n>>k>>s;
    long r=0,w=0;
    for(int i = 0; i < n-1; i++){
        if(s[i]=='R'){
            r++;
        }
        else{
            w++;
        }
    }
    if(r < k){
        cout<<"R";
    }
    else{
        cout<<"W";
    }
}