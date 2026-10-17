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
    vector<long> answer;
    for(int i = 0; i < m;i++){
        long a,b;
        cin>>a>>b;
        long see = min({a,b,n-a+1,n-b+1});
        long ans = see%3;
        if(ans == 0){
            ans = 3;
        }
        answer.push_back(ans);
    }
    for(int i = 0; i < answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}