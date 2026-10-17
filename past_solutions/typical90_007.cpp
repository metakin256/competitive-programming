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
    long n;
    cin>>n;
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    long q;
    cin>>q;
    vector<long> ans;
    for(int i = 0; i < q;i++){
        long tar;
        cin>>tar;
        long l=0,r=n-1;
        while(r-l>1){
            long mid = (l+r)/2;
            if(a[mid]<tar)l=mid;
            else r=mid;
        }
        ans.push_back(min(abs(a[l]-tar),abs(a[r]-tar)));
    }
    for(int i = 0; i < q;i++){
        cout<<ans[i]<<"\n";
    }
}
