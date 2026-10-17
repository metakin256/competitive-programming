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
    vector<vector<long>>nums;
    for(int i = 0; i < 101; i++){
        nums.push_back(vector<long>());
    }
    for(int i = 0; i < n; i++){
        long num;
        cin>>num;
        nums[num].push_back(i);
    }
    vector<long> answers(n);
    for(int i = 0; i < 101;i++){
        vector<long> now = nums[i];
        for(int j = 0; j < now.size();j++){
            long number = now[j];
            long sum = 0;
            for(int k = 0; k < now.size();k++){
                if(now[k]!= number){
                    sum+= abs(number-now[k]);
                }
            }
            answers[number]= sum;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<answers[i]<<"\n";
    }
}