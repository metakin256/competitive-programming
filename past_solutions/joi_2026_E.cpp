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

using ll = long long;
using str = string;

int main()
{
    str s;
    cin>>s;
    bool flag = true;
    long s_len = s.length();
    
        for(int i = 0; i < s_len-2;i++){
        str make_f = s.substr(i,4);
        str make = s.substr(i,3);
        if(make_f=="JOIG"){
            s.erase(i,i+4);
            i--;
            s_len -=4;
            continue;
        }
        else if(make=="IOI"||make=="JOI"){
            s.erase(i,i+3);
            i--;
            s_len -=3;
        }
        else{
            cout<<"No";
            return 0;
        }
        }
    if(s_len ==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}