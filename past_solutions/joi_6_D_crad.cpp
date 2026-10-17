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

vector<long> cut(vector<long> list,long m){
    vector<long>before;
    vector<long>after;
    for(int i = 0; i < list.size();i++){
        if(i < m){
            before.push_back(list[i]);
        }
        else{
            after.push_back(list[i]);
        }
    }
    vector<long> make;
    for(int i = 0; i < after.size();i++){
        make.push_back(after[i]);
    }
    for(int i = 0; i < before.size();i++){
        make.push_back(before[i]);
    }
    return make;
}

vector<long> reful(vector<long> list,long n){
    vector<long>before;
    vector<long>after;
    for(int i = 0; i < list.size();i++){
        if(i < n){
            before.push_back(list[i]);
        }
        else{
            after.push_back(list[i]);
        }
    }
    vector<long> make;
    for(int i = 0; i < n; i++){
        make.push_back(before[i]);
        make.push_back(after[i]);
    }
    return make;
}

int main()
{
    
    long n, m;
    cin >> n >> m;
    vector<long> card;
    for(int i = 1; i < 2*n+1;i++){
        card.push_back(i);
    }
    for(int i = 0; i < m;i++){
        long a;
        cin>>a;
        if(a==0){
            card = reful(card,n);
        }
        else{
            card = cut(card,a);
        }
    }
    for(int i = 0; i < 2*n;i++){
        cout<<card[i]<<"\n";
    }
}