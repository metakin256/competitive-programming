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
    long sum = 0;
    for(int i = 0; i < n-2;i++){
        for(int j = i+1;j<n-1;j++){
            for(int k = j+1;k < n;k++){
                if(a[i]*a[j]==a[k]){
                    sum++;
                }
            }
        }
    }
    cout<<sum;
}