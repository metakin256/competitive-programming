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
    long n,m,k;
    cin>>n>>m>>k;
    vector<long>a,b;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    vector<long> answer;
    for(int i = 0; i < m;i++){
        long num;
        cin>>num;
        b.push_back(num);
        long left = 0,right = n-1;
        while (right-left>1)
        {
            long mid = (left+right)/2;
            if(a[mid]<num){
                left = mid;
            }
            else{
                right = mid;
            }
        }
        long min_num = min(abs(num-a[left]),abs(num-a[right]));
        long vol = k-min_num;
        if(vol < 0){
            vol = 0;
        }
        answer.push_back(vol);
    }
    for(int i = 0; i < m;i++){
        cout<<answer[i]<<"\n";
    }
}