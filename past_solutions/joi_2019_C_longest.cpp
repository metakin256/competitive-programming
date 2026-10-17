#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
    long n;
    cin>>n;
    vector<long>a;
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    a.push_back(0);
    long answer = 0;
    long now = 1;
    for(int i = 1; i < n+1;i++){
        if(a[i-1]<=a[i]){
            now++;
        }
        else{
            if(answer < now){
                answer = now;
            }
            now=1;
        }
        if(i == n){
            if(answer < now){
                answer = now;
            }
            now=1;
        }
    }
    cout<<answer<<"\n";
}