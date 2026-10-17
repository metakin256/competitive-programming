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
    long x,y,z,p;
    cin>>x>>y>>z>>p;
    vector<long>a,b,c;
    for(int i = 0; i < x;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < y;i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    for(int i = 0; i < z;i++){
        long num;
        cin>>num;
        c.push_back(num);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    long one = a[0]+c[0];
    long two = a[x-1]+c[z-1];
    long r = 0,l = y-1;
    while(l-r>1){
        long mid = (r+l)/2;
        if(b[mid]+one < p){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    long r1=0,l1=y-1;
    while(l1-r1>1){
        long mid = (r1+l1)/2;
        if(b[mid]+two < p){
            r1=mid;
        }
        else{
            l1=mid;
        }
    }
    long ans_one = min(abs(one+b[l]-p),abs(one+b[r]-p));
    long ans_two= min(abs(two+b[l1]-p),abs(two+b[r1]-p));
    cout<<max(ans_one,ans_two);
}