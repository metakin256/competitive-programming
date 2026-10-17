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
  long n;
  cin>>n;
  vector<long> a,len,c;
  long now,l;
  long ans = 0;
  for(int i = 0; i < n;i++){
    long num;
    cin>>num;
    a.push_back(num);
  }
  for(int i = 0; i < n-1;i+=2){
    long s1 = a[i],s2 = a[i+1];
    if(s1==s2){
      c.push_back(s2);
    }
    else{
      if(c.size()>0){
        for(int j = c.size()-1;j >= 0;j--){
          if(c[j]==s2) break;
          else c[j]=s2;
        }
        c.push_back(s2);
      }
      else{
        c.push_back(s2);
      }
    }
  }
  if(n%2==1) ans = 1;
  for(int i = 0;i < c.size();i++){
    if(c[i]==0)ans+=2;
  }
  cout<<ans<<"\n";
}