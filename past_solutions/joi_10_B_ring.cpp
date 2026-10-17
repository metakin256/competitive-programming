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
    string s;
    long n;
    cin>>s>>n;
    long count = 0;
    for(int i = 0; i < n;i++){
        string t;
        cin>>t;
        string make = t+t+t;
        for(int i = 0; i < make.length()-s.length();i++){
            string see = make.substr(i,s.length());
            if(see == s){
                count++;
                break;
            }
        }
    }
    cout<<count<<"\n";
}