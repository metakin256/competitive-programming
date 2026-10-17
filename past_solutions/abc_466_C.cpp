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
    long left=1,right=2;
    long count = 0;
    long num = 1;
    while(left < n){
        if (right <= left) {
            right = left + 1;
        }
        if (left == right) {
            right++;
            continue;
        }
        if (right > n) {
            count += (n - left);
            left++;
            continue;
        }
        cout<<"? "<<left<<" "<<right<<"\n";
        string ans;
        cin>>ans;
        if(ans=="Yes"){
            right++;
        }
        else{
            count+= (right-1)-left;
            left++;
            continue;
        }
    }
    cout<<"! "<<count<<"\n";
}