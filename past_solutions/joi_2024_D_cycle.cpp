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
    string s;
    cin>>n>>s;
    for(int i = 1; i < n/2+1;i++){
        if(n%i==0){
            string check = s.substr(0,i);
            for(int j = 0; j < n; j+=i){
                string now = s.substr(j,i);
                if(now!=check){
                    break;
                }
                if(j==n-i){
                    cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    cout<<"No";
}