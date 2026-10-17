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
    long n,k;
    cin>>n>>k;
    vector<long> s;
    map<long,long> dic;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        s.push_back(num);
    }
    long kind=0;
    long right = 0,left = 0;
    long answer = 0;
    while(left < n){
        if(kind <= k){
            answer = max(answer,right-left);
            if(right >= n){
                break;
            }
            if(dic[s[right]]==0){
                kind++;
            }
            dic[s[right]]++;
            right++;
        }
        else{
            dic[s[left]]--;
            if(dic[s[left]]==0){
                kind--;
            }
            left++;
        }
    }
    cout<<answer;
}