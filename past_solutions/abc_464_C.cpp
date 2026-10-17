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
   long n,m;
   cin>>n>>m;
   vector<long>colors(n+1);
   vector<vector<vector<long>>> change(m+1);
   vector<long> num(n+1);
   
   long kind = 0;
   for(int i = 0; i < n;i++){
      long a,d,b;
      cin>>a>>d>>b;
      if(a!=b){
        change[d].push_back(vector<long>{a,b});
      }
      colors[a]++;
      if(colors[a]==1){
        kind++;
      }
   }
   for(int i = 1; i < m+1; i++){
    vector<vector<long>> now = change[i];
    for(int j = 0; j < now.size();j++){
        colors[now[j][0]]--;
        if(colors[now[j][0]]==0){
            kind--;
        }
        colors[now[j][1]]++;
        if(colors[now[j][1]]== 1){
            kind++;
        }
    }
    cout<<kind<<"\n";
   }
}