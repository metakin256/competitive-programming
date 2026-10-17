//いったんパス
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

int main(){
  long n,q;
  cin>>n>>q;
  vector<long>sum;
  sum.push_back(0);
  long now = 0;
  for(int i = 0; i < n-1;i++){
    long num;
    cin>>num;
    now+=num;
    sum.push_back(now);
  }
  long place = 0;
  long ans = 0;
  long mod = 100000; 
  for(int i = 0; i < q;i++){
    long num;
    cin>>num;
    long p_n = place+num;
    long max_num = max(p_n,place);
    long min_num = min(p_n,place);
    ans += sum[max_num]-sum[min_num];
    ans%=mod;
    place = p_n;
  }
  cout<<ans<<"\n";
}