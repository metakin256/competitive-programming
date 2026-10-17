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
    long n,q;
    cin>>n>>q;
    vector<long>a,trance,answer;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        trance.push_back(i);
    }
    long normal = 0;
    for(int i = 0; i < q;i++){
        long kind,x,y;
        cin>>kind>>x>>y;
        if(kind ==1){
            long esc = trance[(x-1-normal+n)%n];
            trance[(x-1-normal+n)%n]=trance[(y-1-normal+n)%n];
            trance[(y-1-normal+n)%n]=esc;
        }
        if(kind==2){
            normal=(normal+1)%n;
        }
        if(kind == 3){
            answer.push_back(a[trance[(x-1-normal+n)%n]]);
        }
    }
    for(int i = 0; i < answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}