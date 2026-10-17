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
    long n,q;
    cin>>n>>q;
    vector<long>a,b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    vector<bool>ab(n);
    long min = 0;
    for(int i = 0; i < n;i++){
        if(a[i]<b[i]){
            ab[i]= true;
            min += a[i];
        }
        else{
            ab[i]= false;
            min += b[i];
        }
    }
    for(int i = 0; i < q;i++){
        string kind;
        long x,v;
        cin>>kind>>x>>v;
        if(kind == "A"){
            if(ab[x]){
                
            }
        }
        else{

        }
    }
}