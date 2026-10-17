#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    long n;
    cin>>n;
    vector<long> pair(n);
    for(int i = 0; i < n*2-1;i++){
        long a;
        cin>>a;
        pair[a-1]++;
    }
    long num = 0;
    for(int i = 0; i < n;i++){
        if(pair[i]==1){
            num = i+1;
        }
    }
    cout<<num;
}