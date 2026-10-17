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
    long a,b,c;
    cin>>a>>b>>c;
    long num = 1;
    for(int i = 0; i < b;i++){
        num *= c;
    }
    if(num > a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}