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
    long long fac = 1;
    for(int i = 1; i < n;i++){
        fac*=i;
        if(fac%n==0){
            cout<<i<<"\n";
            return 0;
        }
    }
}