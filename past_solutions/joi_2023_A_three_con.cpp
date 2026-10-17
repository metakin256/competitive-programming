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
    char now;
    long num= 0;
    bool ans = false;
    for(int i = 0;i < n;i++){
        if(s[i]=='o'){
            num++;
        }
        else{
            num = 0;
        }
        if(num == 3){
            ans = true;
            break;
        }
    }
    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}