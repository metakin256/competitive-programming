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

int main()
{
    long h,w;
    cin>>h>>w;
    vector<vector<long>>bored;
    vector<vector<long>>check({{0,1},{1,1},{1,0},{-1,1},{0,-1},{-1,-1},{-1,0},{1,-1}});
    for(int i = 0; i < h;i++){
        bored.push_back(vector<long>(w));
    }
    for(int i = 0; i < h;i++){
        string s;
        cin>>s;
        for(int j = 0; j < w;j++){
            if(s[j]=='#'){
                bored[i][j]= -1;
                for(int l = 0; l < 8;l++){
                    long x = i+check[l][0];
                    long y = j+check[l][1];
                    if(x>=0&&x<h&&y>=0&&y<w){
                        if(bored[x][y]!=-1){ 
                            bored[x][y]++;
                        }
                    }
                }
            }
        }
    }
    for(int i = 0; i < h;i++){
        for(int j = 0; j < w;j++){
            if(bored[i][j]==-1){
                cout<<"#";
            }
            else{
                cout<<bored[i][j];
            }
        }
        cout<<"\n";
    }
}