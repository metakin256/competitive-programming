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
    ll n,s,l;
    cin>>n>>s>>l;
    s--;
    vector<long>a;
    set<long> numbers;
    a.push_back(0);
    numbers.insert(0);
    ll sum = 0;
    long ans = 1;
    for(int i = 0; i < n-1;i++){
        long num;
        cin>>num;
        sum+=num;
        a.push_back(sum);
        numbers.insert(sum);
    }
    long start = a[(long)s];
    for(int i = 0; i < n;i++){
        long len = abs(start-a[i]);
        long vec = 1;
        if(start-a[i]<0){
            vec = -1;
        }
        if(len<=l){
            long key = a[i]+(l-len)*vec;
            long r = n-1,le = i;
            if(vec==-1){
                r = i;
                le = 0;
            }
            long result = 0;
            while(r-le>1){
                long mid = (r+le)/2;
                if(a[mid]>key){
                    r = mid;
                }
                else{
                    le = mid;
                }
            }
            long kai = 0;
            result = abs(i-le)+1;
            if(result>abs(s-i)+1)kai = result;
            else kai = abs(s-i)+1;
            ans= max(ans,kai);
        }
    }
    cout<<ans;
}