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
  long n,d;
  cin>>n>>d;
  vector<long> x;
  for(int i = 0; i < n;i++){
    long num;
    cin>>num;
    x.push_back(num);
  }
  vector<long>answer;
  for(int i = 0; i < n; i++){
    long now = x[i];
    long ans = 1<<30;
    for(int j = 0; j < n;j++){
      if(i!=j){
        ans = min(ans,abs(now-x[j]));
      }
    }
    if(ans>=d)answer.push_back(i+1);
  }
  cout<<answer.size()<<"\n";
  for(int i = 0; i < answer.size();i++){
    cout<<answer[i]<<" ";
  }
}