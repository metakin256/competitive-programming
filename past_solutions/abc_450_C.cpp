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

struct UnionFind {
    vector<int> par;
    vector<int> siz;

    UnionFind(int n) : par(n), siz(n, 1) {
        for (int i = 0; i < n; i++) par[i] = i;
    }

    int find(int x) {
        if (par[x] == x) return x;
        return par[x] = find(par[x]); // 経路圧縮
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    int size(int x) {
        return siz[find(x)];
    }
};

int main()
{
    ll n,m;
    cin>>n>>m;
    UnionFind uf(n+1);
    bool flag = true;
    for(int i = 0; i < m;i++){
        ll a,b;
        cin>>a>>b;
        if(uf.same(a,b)){
            flag = false;
            break;
        }
        uf.unite(a,b);
    }
    if(m==0){
        flag = false;
    }
    if(flag){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}