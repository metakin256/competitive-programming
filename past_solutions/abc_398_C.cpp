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
    cin>>n;
    std::map<long,long> dic;
    std::vector<long>list;
    for(int i = 0; i < n; i++){
        long a;
        cin>>a;
        list.push_back(a);
        dic[a]++;
    }
    long max_num = -1;
    long val = -1;
    for(int i = 0; i < n; i++){
        if(dic[list[i]]==1){
            if(list[i]> max_num){
                val = i+1;
                max_num = list[i];
            }
        }
    }
    cout<<val;
}