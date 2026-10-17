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
    long h,w;
    cin>>h>>w;
    if (h == 1 || w == 1) {
        cout << h * w << endl;
        return 0;
    }
    if(h%2==1)h++;
    if(w%2==1)w++;
    h/=2;
    w/=2;
    cout<<h*w;
}