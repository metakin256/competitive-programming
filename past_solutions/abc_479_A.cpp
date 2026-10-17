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
   long n;
   cin>>n;
   long ans = 0;
   for(int i = 0; i < n;i++){
        long num;
        cin>>num;
    if(i%2==0){
        ans+=num;
    }
   }
   cout<<ans;
}