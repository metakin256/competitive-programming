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
  long q;
  str s,t;
  cin>>q>>s>>t;
  long t_len = t.length(),s_len=s.length();
  vector<bool> ans;
  vector<long>part;
  for(int i = 0; i < s_len-t_len+1;i++){
    if(s.substr(i,t_len)==t)part.push_back(i);
  }
  for(int i = 0; i < q;i++){
    long l,r;
    bool flag=false;
    cin>>l>>r;
    l--;r--;
    long q_len = r-l;
    for(int j = 0; j < part.size();j++){
      if(l<=part[j]&&part[j]+t_len<=r)flag = true;
    }
    ans.push_back(flag);
  }
  for(int i = 0; i < q;i++){
    if(ans[i])cout<<"Yes";
    else cout<<"No";
    cout<<"\n";
  }
}