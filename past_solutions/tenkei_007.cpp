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
    vector<long>sum_a,sum_b;
    sum_a.push_back(0);
    sum_b.push_back(0);
    long now_a=0,now_b=0;
    for(int i = 0; i < n;i++){
        long c,p;
        cin>>c>>p;
        if(c==1){
            now_a+=p;
        }
        else{
            now_b+=p;
        }
        sum_a.push_back(now_a);
        sum_b.push_back(now_b);
    }
    long q;
    cin>>q;
    vector<vector<long>>answer;
    for(int i = 0; i < q;i++){
        long l,r;
        cin>>l>>r;
        long ans_a = sum_a[r]-sum_a[l-1];
        long ans_b = sum_b[r]-sum_b[l-1];
        answer.push_back({ans_a,ans_b});
    }
    for(int i = 0; i < q;i++){
        cout<<answer[i][0]<<" "<<answer[i][1]<<"\n";
    }
}