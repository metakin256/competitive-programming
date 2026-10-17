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
    long h,w;
    cin>>h>>w;
    vector<vector<long>>baord;
    for(int i = 0; i < h;i++){
        baord.push_back(vector<long>());
        for(int j = 0;j < w;j++){
            char a;
            cin>>a;
            long num;
            if(a == '.')num = 0;
            else num = 1;
            baord[i].push_back(num);
        }
    }
    long lx = 0;
    long rx = w-1;
    long ly = 0;
    long ry = h-1;
    bool end = false;
    for(int i = 0; i < h; i++){
        for(int j = 0;j < w;j++){
            if(baord[i][j]==1){
                if(rx > j){
                    rx = j;
                }
                if(ry > i){
                    ry = i;
                }
            }
        }
    }
    end = false;
    for(int i = 0; i < h; i++){
        for(int j = 0;j < w;j++){
            if(baord[h-i-1][w-j-1]==1){
                if(lx < w-j-1){
                    lx = w-j-1;
                }
                if(ly < h-i-1){
                    ly = h-i-1;
                }
            }
        }
    }
    for(int i = ry; i < ly+1;i++){
        for(int j = rx; j < lx+1;j++){
            long now = baord[i][j];
            if(now == 1){
                cout<<"#";
            }
            else{
                cout<<".";
            }
        }
        cout<<"\n";
    }
}