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
    vector<vector<long>> roud;
    for(int i = 0; i < h;i++){
        roud.push_back(vector<long>());
        for(int j = 0; j < w;j++){
            long num;
            cin>>num;
            roud[i].push_back(num);
        }
    }
    long answer=1<<30;
    for(int i = 0; i < h;i++){
        for(int j = 0; j < w;j++){
            long sum=0;
            for(int k = 0; k < h;k++){
                for(int l = 0; l < w;l++){
                    long dis = min(abs(i-k),abs(j-l));
                    sum += dis*roud[k][l];
                }
            }
            if(answer > sum){
                answer = sum;
            }
        }
    }
    cout<<answer<<"\n";
}