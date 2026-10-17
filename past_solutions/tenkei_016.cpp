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
    long n,a,b,c;
    cin>>n>>a>>b>>c;
    long answer = 1<<30;
    for(int i = 0; i < 9999;i++){
        for(int j = 0;j < 9999;j++){
            long num = n-a*i-b*j;
            if(num < 0){
                break;
            }
            if(num % c==0){
                answer = min(answer,i+j+num/c);
            }
        }
    }
    cout<<answer;
}