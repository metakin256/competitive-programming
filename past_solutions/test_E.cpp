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
    long n,m,q;
    cin>>n>>m>>q;
    std::map<std::vector<long>,long> dic;
    std::map<long,long> crum;
    std::vector<bool> answer;
    for(int i = 0; i < q;i++){
        long k;
        cin >>k;
        if(k==1){
            long x,y;
            cin>>x>>y;
            std::vector<long> a {x,y};
            dic[a]=1;
        }
        if(k==2){
            long x;
            cin>>x;
            crum[x]=1;
        }
        if(k==3){
            long x,y;
            cin>>x>>y;
            std::vector<long> a {x,y};
            if(dic.count(a)||crum.count(x)){
                answer.push_back(true);
            }
            else{
                answer.push_back(false);
            }
        }
    }
    for(int i = 0; i < answer.size();i++){
        if(answer[i]){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
}
