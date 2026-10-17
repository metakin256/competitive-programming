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

using ll = long long;

int main()
{
    ll q;
    cin>>q;
    priority_queue<ll> pq;
    vector<long>answer;
    for(int i = 0; i < q;i++){
        ll kind,h;
        cin>>kind>>h;
        if(kind==1)pq.push(-h);
        else{
            while(true){
                if(pq.size()==0){
                    break;
                }
                if(pq.top()<-h){
                    break;
                }
                pq.pop();
            }
        }
        answer.push_back(pq.size());
    }
    for(int i = 0; i < q;i++){
        cout<<answer[i]<<"\n";
    }
}