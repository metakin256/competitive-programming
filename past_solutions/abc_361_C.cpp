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
    long n,k;
    cin>>n>>k;
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    long l=0,r=n-1;
    for(int i = 0; i < k;i++){
        long one = a[l+1]-a[l];
        long two = a[r]-a[r-1];
        if(one > two){
            l++;
        }
        else{
            r--;
        }
    }
    cout<<a[r]-a[l];
}