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
  long n,m,t,x,y;
  cin>>n>>m>>t>>x>>y;
  vector<long> point;
  for(int i = 0; i < m;i++){
    long num;
    cin>>num;
    point.push_back(num);
  }
  vector<long> p(n+1);
  map<pair<long,long>,pair<long,long>>dic;
  for(int i = 0; i < y;i++){
    long time,man,pro;
    str s;
    cin>>time>>man>>pro>>s;
    if(s=="open"){
      dic[{man,pro}].first=time;
    }
    if(s=="correct"){
      pair<long,long> now = dic[{man,pro}];
      p[man] += max(x,point[pro-1]-(time-now.first)-120*now.second);
    }
    if(s=="incorrect"){
      dic[{man,pro}].second++;
    }
  }
  for(int i = 1;i < n+1;i++){
    cout<<p[i]<<"\n";
  }
}