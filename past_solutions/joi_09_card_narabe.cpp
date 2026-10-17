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

map<string,long>dic;

void make(vector<str>s,set<long>used,long ind,long count,str made,str mat){
  made=made+mat;
  used.insert(ind);
  if(count == 1){
    dic[made]++;
  }
  else{
    for(int i = 0; i < s.size();i++){
      if(!used.contains(i))make(s,used,i,count-1,made,s[i]);
    }
  }
}

int main(){
  long n,k;
  cin>>n>>k;
  vector<string>s;
  for(int i = 0; i < n;i++){
    string num;
    cin>>num;
    s.push_back(num);
  }
  for(int i = 0; i < n;i++){
    make(s,{},i,k,"",s[i]);
  }
  cout<<dic.size()<<"\n";
}