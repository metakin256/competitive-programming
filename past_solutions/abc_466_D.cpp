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
    long n,m;
    cin>>n>>m;
    map<long,long>h;
    map<long,long>w;
    long count = 0;
    for(int i = 0; i < m;i++){
        long c,d;
        cin>>c>>d;
        count++;
        if(h.count(c)){
            if(h[c]!= 0){
                h[c]=0;
                count--;
            }
        }
        if(w.count(d)){
            if(w[c]!= 0){
                w[c]=0;
                count--;
            }
        }
        h[c]=d;
        w[d]=c;
    }
    cout<<count;
}