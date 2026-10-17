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
    string s;
    cin>>n>>s;
    vector<bool> seat(n+2);
    for(int i = 1; i < n+1;i++){
        if(s[i-1]=='o'){
            seat[i]=true;
        }
    }
    long count = 0;
    for(int i = 1; i < n+1;i++){
        if(!seat[i-1]&&!seat[i]&&!seat[i+1]){
            count++;
        }
    }
    cout<<count;
}