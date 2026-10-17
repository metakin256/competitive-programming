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
  long mod = m%n;
  if(mod == 0)mod;
  for(int i = 0; i < mod;i++){
    cout<<m/n+1<<"\n";
  }
   for(int i = 0; i < n-mod;i++){
    cout<<m/n<<"\n";
  }
}