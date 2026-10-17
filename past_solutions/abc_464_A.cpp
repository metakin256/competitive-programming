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
    long east = 0;
    long west = 0;
    for(int i = 0; i < s.length();i++){
        if(s[i]=='E'){
                east++;
        }
        else{
                west++;
        }
    }
    if(east > west){
        cout<<"East";
    }
    else{
        cout<<"West";
    }
}