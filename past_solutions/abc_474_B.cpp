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

using namespace std;

using ll = long long;
using str = string;

int main()
{
    long n;
    cin>>n;
    map<long,long> dic;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        long now = i/10;
        if(now*10<num&&num<=(now+1)*10){
            dic[num%10]++;
            if(dic[num%10]!=now+1){
                cout<<"No";
                return 0;
            }
        }
        else{
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}   