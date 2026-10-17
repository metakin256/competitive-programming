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
    long n,q;
    cin>>n>>q;
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    vector<long> answers;
    for(int i = 0; i < q;i++){
        long long target;
        cin>>target;
        long right = 0,left=0;
        long count = 0;
        long now = 0;
        for(int j = 0; j < n;j++){
            left = j;
            while(right < n && now + a[right] <= target){
                now += a[right];
                right++;
            }
            count+=(right-left);
            if (right == left){
                right++;
            } else {
                now -= a[left];
            }
        }
        answers.push_back(count);
    }
    for(int i = 0; i < answers.size();i++){
        cout<<answers[i]<<"\n";
    }
}