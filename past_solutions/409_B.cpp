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
    vector<long>a;
    for(int i = 0; i <n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    long answer = 0;
    for(int i = n; i >0;i--){
        if(a[i-1]>=i){
            cout<<a[i-1];
            return 0;
        }
    }
}