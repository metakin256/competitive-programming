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
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        if(0 <= num){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}