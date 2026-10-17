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
    long h,w,q;
    cin>>h>>w>>q;
    long x,y;
    cin>>x>>y;
    vector<long> now ({x,y});
    long answer = 0;
    vector<vector<long>> check ({{1,0},{0,1},{1,1},{-1,0},{0,-1},{-1,-1}});
    for(int i = 0; i < q-1;i++){
        vector<vector<bool>>visited;
        long a,b;
        cin>>a>>b;
        long x_deruta = a-now[0];
        long y_deruta = b-now[1];
        if(x_deruta*y_deruta < 0){
            answer += abs(x_deruta)+abs(y_deruta);
        }
        else{
            answer += max(abs(x_deruta),abs(y_deruta));
        }
        now =(vector<long>({a,b}));
    }
    cout<<answer<<"\n";
}