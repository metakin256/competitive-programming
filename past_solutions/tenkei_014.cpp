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
    priority_queue<long>a,b;
    for(int i = 0; i < n;i++){
        long long num;
        cin>>num;
        a.push(num);
    }
    for(int i = 0; i < n;i++){
        long long num;
        cin>>num;
        b.push(num);
    }
    long long answer = 0;
    for(int i = 0; i < n;i++){
        answer += abs(a.top()-b.top());
        a.pop();
        b.pop();
    }
    cout<<answer;
}