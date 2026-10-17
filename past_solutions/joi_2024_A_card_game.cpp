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
    priority_queue<long> odd_num;
    priority_queue<long> even_num;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        if(num % 2==0){
            odd_num.push(num);
        }
        else{
            even_num.push(num);
        }
    }
    long even_sum = 0;
    if(even_num.size()>=k){
        for(int i = 0; i < k;i++){
            even_sum += even_num.top();
            even_num.pop();
        }
    }
    long odd_sum = 0;
    if(odd_num.size()>=k){
        for(int i = 0; i < k;i++){
            odd_sum += odd_num.top();
            odd_num.pop();
        }
    }
    cout<<max(even_sum,odd_sum);
}