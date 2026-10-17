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
    for(int i =1; i < n-1; i++){
        string make = s.substr(i-1,3);
        if(make=="IOI"){
            count++;
        }
        if(make=="AOI"){
            count++;
        }
    }
    cout<<count;
}