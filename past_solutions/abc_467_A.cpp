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
    float h,w;
    cin>>h>>w;
    h /=100;
    float bmi = w/h/h; 
    if(bmi>=25){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}