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
    vector<bool> card(200001);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        card[num]=true;
    }
    for(int i = 1;i+6 < 200001;i++){
        if(card[i]&&card[i+3]&&card[i+6]){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}   