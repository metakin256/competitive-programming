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
  long n,sx,sy;
  cin>>n>>sx>>sy;
  vector<vector<long>>s,p;
  for(int i = 0; i < n-1;i++){
    long a,b;
    cin>>a>>b;
    s.push_back({sx-a,sy-b});
  }
  long q;
  cin>>q;
  set<pair<long,long>>hs;
  for(int i = 0; i < q;i++){
    long a,b;
    cin>>a>>b;
    hs.insert({a,b});
    p.push_back({a,b});
  }
  for(int i = 0; i < q;i++){
    bool flag=true;
    for(int j = 0; j < n-1;j++){
      long nx = p[i][0]-s[j][0],ny = p[i][1]-s[j][1];
      if(!hs.contains({nx,ny})){
        flag = false;
      }
    }
    if(flag){
      cout<<p[i][0]-sx<<" "<<p[i][1]-sy<<"\n";
      return 0;
    }
  }
}