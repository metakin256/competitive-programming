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
    long t;
    cin>>t;
    vector<long> ans;
    for(int i = 0; i < t;i++){
        long n;
        cin>>n;
        vector<long> a,b;
        long k=1<<30,count=0,answer=0;
        for(int j = 0; j < n;j++){
            long x,y;
            cin>>x>>y;
            a.push_back(x);
            b.push_back(y);
            k=min(x,k);
        }
        for(int j = 0; j < n;j++){
            if(a[j]-b[j]>k){
                count++;
                answer+=b[j];
            }
            else{
                answer+=a[j];
                count--;
            }
            
        }
        if(count>0){
            answer+=k*count;
        }
        ans.push_back(answer);
    }
    for(int i = 0; i < t;i++){
        cout<<ans[i]<<"\n";
    }
}   