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
    vector<vector<long>> sq;
    sq.push_back(vector<long>());
    for(int i = 0;i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        sq[0].push_back(num);
    }
    for(int i = 0; i < n-1;i++){
        sq.push_back(vector<long>());
        for(int j = 0; j < n-i-1;j++){
            long num = sq[i][j]-sq[i][j+1];
            if(num < 0){
                num *= -1;
            }
            sq[i+1].push_back(num);
        }
    }
    long ans=sq[n-1][0];
    cout<<ans;
}