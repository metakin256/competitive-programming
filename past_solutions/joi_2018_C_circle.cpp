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
    string s;
    cin>>n>>s;
    long count=0;
    for(int i = 0; i < n-1;i++){
        string t = s.substr(i,2);
        if(t =="OX"||t=="XO"){
            count++;
            i++;
        }
    }
    cout<<count<<"\n";
}