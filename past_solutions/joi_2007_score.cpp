#include <iostream>
#include <vector>
#include <queue>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
    long n;
    cin>>n;
    map<long,long>score;
    vector<long> student;
    for(int i = 0; i < n;i++){
        long num;
        cin>>num;
        score[num]++;
        student.push_back(num);
    }
    long now=1;
    for(int i = 100; i > -1;i--){
        if(score.count(i)){
            long people = score[i];
            score[i]= now;
            now += people;
        }
    }
    for(int i = 0; i < n;i++){
        cout<<score[student[i]]<<"\n";
    }
}