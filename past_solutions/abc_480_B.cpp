//これもパス
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
#include <unordered_set>//ハッシュセットの使用に必要

using namespace std;

using ll = long long;
using str = string;

int main()
{
    long n,m;
    cin>>n>>m;
    vector<string>name;
    map<str,long>dic;
    for(int i = 0;i < n;i++){
        str s;
        cin>>s;
        name.push_back(s);
        dic[s]=0;
    }
    for(int i = 0; i < m;i++){
        str t;
        cin>>t;
        if(dic.contains(t))dic[t]++;
        else{
            long num=-1;
            long c=0;
            for(int j = 0; j < n;j++){
                long dif=0;
                if(name[j].size()==t.size()){
                    for(int k = 0; k < name[j].size();k++){
                        if(t[k]!=name[j][k])dif++;
                    }
                }
                if(dif==1){
                    num=j;
                    c++;
                }
            }
            if(c==1){
                dic[name[num]]++;
            }
        }
    }
    for(int i = 0; i < n;i++){
        cout<<dic[name[i]]<<"\n";
    }
}