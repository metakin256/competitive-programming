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
    vector<long> list(2);
    for(int i = 0; i < n;i++){
        long aoi;
        long pi;
        if(s[i]=='R')aoi = 1;
        if(s[i]=='S')aoi = 2;
        if(s[i]=='P')aoi = 3;
        if(t[i]=='R')pi = 1;
        if(t[i]=='S')pi = 2;
        if(t[i]=='P')pi = 3;
        if(aoi != pi){
            if(aoi==1&&pi==2){
                list[0]++;
            }
            if(aoi==2&&pi==3){
                list[0]++;
            }
            if(aoi==3&&pi==1){
                list[0]++;
            }
            if(aoi==1&&pi==3){
                list[1]++;
            }
            if(aoi==2&&pi==1){
                list[1]++;
            }
            if(aoi==3&&pi==2){
                list[1]++;
            }
        }
        
    }
    cout<<list[0]<<" "<<list[1];
}