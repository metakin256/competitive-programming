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
    long h,w;
    cin>>h>>w;
    vector<long> w_c,b_c,r_c;
    long w_now = 0,b_now = 0,r_now =0;
    w_c.push_back(0);
    b_c.push_back(0);
    r_c.push_back(0);
    for(int i = 0; i < h;i++){
        string s;
        cin>>s;
        long w_k = 0,b_k = 0,r_k =0;
        for(int j = 0; j < w;j++){
            if(s[j]=='W'){
                w_k++;
            }
            if(s[j]=='B'){
                b_k++;
            }
            if(s[j]=='R'){
                r_k++;
            }
        }
        w_now += w-w_k;
        b_now +=w-b_k;
        r_now +=w-r_k;
        w_c.push_back(w_now);
        b_c.push_back(b_now);
        r_c.push_back(r_now);
    }
    long answer = 1<<30;
    for(int i = 1; i < h-1;i++){
        for(int j = i+1;j < h;j++){
            long ans = w_c[i]+b_c[j]-b_c[i]+r_now-r_c[j];
            if(ans < answer){
                answer = ans;
            }
        }
    }
    cout<<answer<<"\n";
}