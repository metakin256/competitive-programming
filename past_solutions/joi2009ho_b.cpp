#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stack>
#include <deque>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <climits>

using namespace std;
using ll = long long;

int main() {
    long d,n,m;
    cin>>d>>n>>m;
    vector<long>store;
    store.push_back(0);
    store.push_back(d);
    for(int i = 0; i < n-1;i++){
        long num;
        cin>>num;
        store.push_back(num);
    }
    sort(store.begin(),store.end());
    long ans = 0;
    for(int i = 0; i < m;i++){
        long l=0,r=n,target;
        cin>>target;
        while(r-l>1){
            long mid = (l+r)/2;
            if(store[mid]<target)l=mid;
            else r=mid;
        }
        ans += min(abs(target-store[l]),abs(target-store[r]));
    }
    cout<<ans;
}
