#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int main()
{
    long n;
    string s;
    cin>>n>>s;
    long now = 1;
    long count = 0;
    for(int i = 0; i < n;i++){
        char t = s[i];
        if(t=='L'){
            if(now > 1){
                now--;
            }
        }
        else{
            if(now < 3){
                now++;
            }
        }
        if(now == 3){
            count++;
        }
    }
    cout<<count;
}