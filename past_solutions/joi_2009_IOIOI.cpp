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
  long n,s_len;
  str s;
  cin>>n>>s_len>>s;
  long ans = 0,len = 0;
  bool flag = false;
  for(int i = 0; i < s_len;i++){
    if(flag){
      if(s[i]=='O'&&s[i+1]=='I'){
        i++;
        len++;
      }
      else{
        if(len>=n){
          ans += len-n+1;
        }
        flag = false;
        len=0;
        i--;
      }
    }
    else if(s[i]=='I'){
      flag = true;
    }
  }
  if(len>=n&&flag){
    ans += len-n+1;
  }
  cout<<ans<<"\n";
}