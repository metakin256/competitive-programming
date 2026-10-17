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
  long n,v;
  cin>>n>>v;
  vector<long>w;
  for(int i = 0; i < n;i++){
    long num;
    cin>>num;
    w.push_back(num);
  }
  long ans = 0;
  for(int i = 0; i < n-2;i++){
    for(int j = i+1; j < n-1;j++){
        for(int k = j+1; k < n;k++){
            if(v>=i+j+k+3)ans=max(ans,w[i]+w[j]+w[k]);
        }
    }
  }
  cout<<ans;
}