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
    long n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 1;i < n;i++){
        if(s[i]=='J'){
            cout<<s[i-1]<<"\n";
        }
    }
}