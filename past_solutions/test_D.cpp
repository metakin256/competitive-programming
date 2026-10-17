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
    long n;
    cin>>n;
    for(int i = 1; i < n+1;i++){
        if(i % 3==0){
            cout<<'x';
        }
        else{
            cout<<'o';
        }
    }
    cout<<"\n";
}
