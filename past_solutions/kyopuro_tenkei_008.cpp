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
    long a_num= 0;
    long t_num= 0;
    long c_num= 0;
    long o_num= 0;
    long d_num= 0;
    long e_num= 0;
    long answer=0;
    long mod = (long)1000000007;
    for(int i = 0; i < n;i++){
        if(s[i]=='a'){
            a_num++;
        }
        if(s[i]=='t'){
            t_num += a_num;
        }
        if(s[i]=='c'){
            c_num += t_num;
        }
        if(s[i]=='o'){
            o_num += c_num;
        }
        if(s[i]=='d'){
            d_num += o_num;
        }
        if(s[i]=='e'){
            e_num += d_num;
        }
        if(s[i]=='r'){
            answer += e_num;
        }
        answer %= mod;
        a_num %= mod;
        t_num %= mod;
        c_num %= mod;
        o_num %= mod;
        d_num %= mod;
        e_num %= mod;
    }
    cout<<answer;
}