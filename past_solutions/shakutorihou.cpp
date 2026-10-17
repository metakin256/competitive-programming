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
    long long n,k;
    cin>>n>>k;
    vector<long> s;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        s.push_back(num);
    }
    long long now = 0;
    long left = 0,right = 0;
    long long count = 0;
    while(left != n){
        if(now < k){
            if(right < n){
                now += s[right];
                right++;
            }
            else{
                now -= s[left];
                left++;
            }
        }
        else{
            count += (n - right + 1);
            now -= s[left];
            left++;
        }
    }
    cout<<count;
}