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
    vector<vector<long>>board;
    for(int i = 0; i < 1001;i++){
        board.push_back(vector<long>(1001));
    }
    for(int i = 0; i <n;i++){
        long a,b,c,d;
        cin>>a>>b>>c>>d;
        board[a][b]++;
        board[c][d]--;
    }
    for(int i = 1; i < 1001;i++){
        for(int j = 1;j < 1001;j++){
            board[i][j]+=board[i-1][j]+board[i][j-1]-board[i-1][j-1];
        }
    }
}