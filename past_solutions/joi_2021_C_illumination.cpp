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
    long on_b = 0,off_b = 0;
    long on_a = 0,off_a = -1;
    vector<long> a;
    off_b++;
    a.push_back(0);
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
        if(num==1){
            on_b++;
        }
        else{
            off_b++;
        }
    }
    long answer = 1<<30;
    for(int i = 0; i < n+1;i++){
        if(a[i]==0){
            off_b--;
            off_a++;
        }
        else{
            on_b--;
            on_a++;
        }
        answer = min(answer,off_a+on_b);
    }
    cout<<answer;
}