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
    long h,w;
    cin>>h>>w;
    vector<vector<long>> answer;
    for(int i = 0; i < h;i++){
        string s;
        cin>>s;
        long now= -1;
        answer.push_back(vector<long>());
        for(int j = 0; j < w;j++){
            if(s[j]=='c'){
                now = 0;
                answer[i].push_back(now);
            }
            else{
                if(now != -1){
                    now++;
                }
                answer[i].push_back(now);
            }
        }
    }
    for(int i = 0; i < h;i++){
        for(int j = 0; j < w;j++){
            cout<<answer[i][j];
            if(j != w-1){
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}