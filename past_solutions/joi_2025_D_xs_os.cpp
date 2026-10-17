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
    long n;
    cin>>n;
    vector<long>x(n);
    vector<long>y(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            string s;
            cin>>s;
            if(s=="o"){
                x[i]++;
                y[j]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(x[i]==n||x[i]==0){
            cout<<"Yes";
            return 0;
        }
        if(y[i]==n||y[i]==0){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}