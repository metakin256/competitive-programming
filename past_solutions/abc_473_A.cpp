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

using ll = long long;
using str = string;

int main()
{
    long n;
    cin>>n;
    long answer = 0;
    for(int i = 0; i < n/2;i++){
        long num;
        cin>>num;
    }
    for(int i = 0; i < n/2;i++){
        long num;
        cin>>num;
        answer+=num;
    }
    cout<<answer;
}