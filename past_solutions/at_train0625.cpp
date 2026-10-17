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
    string s;
    cin>>s;
    long n = s.length();
    for(int i = 0; i < n;i++){
        if(s[i]<94){
            cout<<s[i];
        }
    }
    cout<<"\n";
}