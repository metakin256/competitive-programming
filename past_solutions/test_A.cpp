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
    cin >> n;
    std::vector<long>a(n);
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    long sum = accumulate(a.begin(),a.end(),0L);
    long max = *max_element(a.begin(),a.end());
    long min = *min_element(a.begin(),a.end());
    cout<<sum<<" "<<max<<" "<<min;
}
