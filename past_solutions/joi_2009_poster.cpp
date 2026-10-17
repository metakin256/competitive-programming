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
  long n,k;
  cin>>n>>k;
  str ans = "";
  long len = 1<<n,rent = 0;
  for(int i = 1; i < n+1;i++){
    long make = 1<<(n-i);
    if(make>=k)break;
    rent += make;
    k-=make;
  }
  //cout<<rent<<"\n";
  for(int i = 0; i < rent;i++)cout<<"I";
  long j = len-rent;
  for(int i = 0; i < (j+1)/2;i++)cout<<"J";
  for(int i = 0; i < j-(j+1)/2;i++)cout<<"O";
 cout<<"\n";
}