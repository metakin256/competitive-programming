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

int main()
{
    set<long> nums;
    for(int i = 0; i<5;i++){
        long num;
        cin>>num;
        nums.insert(num);
    }
    cout<<nums.size();
}