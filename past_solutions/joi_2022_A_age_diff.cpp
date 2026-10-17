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

int main()
{
    long n;
    cin>>n;
    vector<long>a;
    long max_num = 0;
    long min_num = 1<<30;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        if(min_num > num){
            min_num = num;
        }
        if(max_num < num){
            max_num = num;
        }
    }
    for(int i = 0; i < n; i++){
        long now = a[i];
        long ans = max(max_num-now,now-min_num);
        cout<<ans<<"\n";
    }
}