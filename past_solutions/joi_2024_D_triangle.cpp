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
    vector<long>a;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        a.push_back(num);
    }
    vector<vector<long>> table;
    table.push_back(a);
    for(int i = 0; i < n-1; i++){
        vector<long> make;
        for(int j = 0; j < n-i-1;j++){
            long number = table[i][j]+table[i][j+1];
            cout<<number<<" ";
            make.push_back(number);
        }
        table.push_back(make);
        cout<<"\n";
    }
}