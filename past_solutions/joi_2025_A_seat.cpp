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
    long answer = 0;
    long odd_max = 0;
    for(int i = 0; i < n*2+2;i++){
        long num;
        cin>>num;
        if(i % 2==1){
            answer = max(answer,odd_max+num);
        }
        else{
            odd_max = max(odd_max,num);
        }
    }
    cout<<answer;
}