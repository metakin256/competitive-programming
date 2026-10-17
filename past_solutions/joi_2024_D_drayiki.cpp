#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
    long n,m;
    cin>>n>>m;
    vector<long>a;
    vector<long>b;
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    for(int i = 0; i < m; i++){
        long num;
        cin>>num;
        b.push_back(num);
    }
    long sum = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            long one = a[i];
            long two = b[j];
            long max_num = 0;
            if(one > two){
                max_num = one;
            }
            else{
                max_num = two;
            }
            long number = (one+two)*max_num;
            sum += number;
        }
    }
    cout<<sum;
}