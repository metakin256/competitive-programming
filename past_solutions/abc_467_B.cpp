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
    long answer = 0;
    for(int i = 0; i < n;i++){
        long a,b;
        string s;
        cin>>a>>b>>s;
        if(s=="keep"){
            answer += b-a;
        }
    }
    cout<<answer;
}