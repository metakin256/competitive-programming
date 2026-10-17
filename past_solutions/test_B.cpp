#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    long x,y;
    cin>>x>>y;
    long num = (x+y)%12;
    if(num == 0){
        num = 12;
    }
    cout << num;
}
