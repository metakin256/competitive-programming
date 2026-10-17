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
    long q;
    cin>>q;
    stack<string> m;
    vector<string>answer;
    for(int i = 0; i < q;i++){
        string s;
        cin>>s;
        if(s=="READ"){
            string ans = m.top();
            m.pop();
            answer.push_back(ans);
        }
        else{
            m.push(s);
        }
    }
    for(int i = 0; i < answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}