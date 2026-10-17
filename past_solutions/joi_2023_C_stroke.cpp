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
    long n;
    string s;
    cin>>n>>s;
    long sum=0;
    for(int i = 0; i < n;i++){
        if(s[i]== 'o'){
            sum+=1;
        }
        else{
            sum+=2;
        }
    }
    cout<<sum;
}