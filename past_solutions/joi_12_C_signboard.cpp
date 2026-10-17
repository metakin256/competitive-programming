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
    long s_len = s.length();
    long answer = 0;
    for(int i = 0; i < n; i++){
        string t;
        cin>>t;
        bool bre = false;
        long t_len = t.length();
        for(int j = 1; j < t_len;j++){
            if(s_len+(j-1)*(s_len-1)<=t_len){
                long roop = t_len-(s_len+(j-1)*(s_len-1))+1;
                for(int k = 0; k < roop;k++){
                    string make;
                    for(int l = 0; l < s_len;l++){
                        make = make+t[k+j*l];
                    }
                    if(make==s){
                        answer++;
                        bre = true;
                        break;
                    }
                }
            }
            if(bre){
                break;
            }
        }
    }
    cout<<answer<<"\n";
}