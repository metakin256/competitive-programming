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
    long n;
    cin>>n;
    vector<long> point(n+1);
    for(int i = 0; i < n*(n-1)/2;i++){
        long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c==d){
            point[a]++;
            point[b]++;
        }
        if(c < d){
            point[b]+=3;
        }
        if(c >d){
            point[a]+=3;
        }
    }
    map<long,long> score;
    for(int i = 1; i < n+1;i++){
        score[point[i]]++;
    }
    long now= 1;
    for(int i = 300;i > -1;i--){
        if(score.count(i)){
            long num = score[i];
            score[i]= now;
            now+= num;
        }
    }
    for(int i = 1; i < n+1;i++){
        cout<<score[point[i]]<<"\n";
    }
}