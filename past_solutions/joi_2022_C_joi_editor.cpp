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
    string s;
    cin>>n>>s;
    char last = s[0];
    for(int i = 1;i < n;i++){
        char now = s[i];
        if(last==now){
            s[i]= now-32;
            s[i-1]= now-32;
        }
        last = s[i];
    }
    cout<<s;
}