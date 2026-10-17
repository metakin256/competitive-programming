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
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    long answer = 0;
    long r=0;
    for(int i = 0; i < n;i++){
        while(r+1 < n&&a[r]<a[r+1]){
            r++;
        }
        answer += (r-i+1);
        if(r == i){
            r++;
        }
    }
    cout<<answer;
}