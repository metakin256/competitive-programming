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
    vector<long> answer;
    long now = 0;
    long ans = 1;
    for(int i = 0; i < n;i++){
        if(s[i]=='x'){
            answer.push_back(i+1);
        }
    }
    for(int i = 0; i < n;i++){
        if(i < answer.size())cout<<answer[i]<<"\n";
        else cout<<n<<"\n";
    }
}