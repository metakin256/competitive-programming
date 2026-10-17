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
    vector<vector<long>>s,t;
    for(int i = 0; i < n; i++){
        s.push_back(vector<long>());
        string str;
        cin>>str;
        for(int j = 0; j < n;j++){
            if(str[j]=='R'){
                s[i].push_back(0);
            }
            if(str[j]=='G'){
                s[i].push_back(1);
            }
            if(str[j]=='B'){
                s[i].push_back(2);
            }
        }
   
    }
    for(int i = 0; i < n; i++){
        t.push_back(vector<long>());
        string str;
        cin>>str;
        for(int j = 0; j < n;j++){
            if(str[j]=='R'){
                t[i].push_back(0);
            }
            if(str[j]=='G'){
                t[i].push_back(1);
            }
            if(str[j]=='B'){
                t[i].push_back(2);
            }
        }
    }
    vector<vector<vector<long>>>matrix;
    matrix.push_back(s);
    //回転したsを作る
    //回転するためのコードを書いていく
    for(int i = 0; i < 3; i++){
        vector<vector<long>>make(n);
        for(int j = 0; j < n;j++){
            for(int k = 0; k < n;k++){
                make[j].push_back(s[k][n-j-1]);
            }
        }
        matrix.push_back(make);
        s = make;
    }
    //マトリクスを作ったからtとあってない点を数え上げる
    long answer = 1<<30;
    for(int i = 0; i < 4;i++){
        long count=0;
        vector<vector<long>>now = matrix[i];
        for(int j = 0; j < n;j++){
            for(int k = 0; k < n;k++){
                if(now[j][k] != t[j][k]){
                    count++;
                }
            }
        }
        //回転に時間がかかることを忘れていた
        if(i%2 ==1){
            count++;
        }
        if(i==2){
            count+=2;
        }
        answer = min(answer,count);
    }
    cout<<answer;
}