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
    vector<long>nums(n*2+1);
    vector<long> t;
    vector<long> h;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        nums[num]=1;
    }
    for(int i = 1; i < 2*n+1;i++){
        if(nums[i]==0){
            h.push_back(i);
        }
        else{
            t.push_back(i);
        }
    }
    long t_num=n,h_num=n;
    vector<bool> t_have(n);
    vector<bool> h_have(n);
    bool trun = true;
    long filed = 0;
    while(t_num > 0&&h_num > 0){
        bool pass = false;
        if(trun){
            for(int i = 0;i < n;i++){
                if(!t_have[i]){
                    if(t[i] > filed){
                        t_have[i]=true;
                        t_num--;
                        filed = t[i];
                        pass = true;
                        break;
                    }
                }
            }
        
        }
        else{
            for(int i = 0;i < n;i++){
                if(!h_have[i]){
                    if(h[i] > filed){
                        h_have[i]=true;
                        h_num--;
                        filed = h[i];
                        pass = true;
                        break;
                    }
                }
            }
        }
        trun = !trun;
        if(!pass){
            filed = 0;
        }        
    }
    cout<<h_num<<"\n"<<t_num<<"\n";
}