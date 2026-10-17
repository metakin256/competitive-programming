#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    long n,m;
    std::cin>>n>>m;
    std::vector<long> election(n);
    std::vector<string> reslut;
    long normal = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        reslut.push_back(s);
    }
    for(int i = 0;i < m;i++){
        long zero = 0;
        long one = 0;
        for(int j = 0; j < n;j++){
            if(reslut[j][i]=='1'){
                one++;
            }
            else{
                zero++;
            }
            
        }

        if(one==0||zero==0){
            normal++;
        }
        else if(one > zero){
            for(int k = 0; k < n;k++){
                if(reslut[k][i]=='0'){
                    election[k]++;
                }
            }
        }
        else{
            for(int k = 0; k < n;k++){
                if(reslut[k][i]=='1'){
                    election[k]++;
                }
            }
        }
    }
    long max = *max_element(election.begin(),election.end());
    for(int i = 0; i < n;i++){
        if(election[i]==max){
            cout<<i+1<<' ';
        }
    }
    cout<<"\n";
}
