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

struct UnionFind {
    std::vector<int> par; // 親の番号（根の場合は -(グループの要素数) を保持）

    // 初期化：最初は全員が独立したサイズ1のグループ
    UnionFind(int n) : par(n, -1) {}

    // x の属するグループの根（代表者）を求める
    int root(int x) {
        if (par[x] < 0) return x;
        return par[x] = root(par[x]); // 経路圧縮（木を平坦化して高速化）
    }

    // x と y が同じグループに属するか判定
    bool same(int x, int y) {
        return root(x) == root(y);
    }

    // x と y のグループを統合する
    bool unite(int x, int y) {
        x = root(x);
        y = root(y);
        if (x == y) return false; // 既に同じグループなら何もしない

        // マージテク（サイズの大きい方に小さい方を繋ぐ）
        if (par[x] > par[y]) std::swap(x, y);
        par[x] += par[y]; // サイズを合算
        par[y] = x;       // y の親を x に設定
        return true;
    }

    // x が属するグループの要素数を返す
    int size(int x) {
        return -par[root(x)];
    }
};

int main()
{
    long h,w,q;
    cin>>h>>w>>q;
    UnionFind uf(h*w);
    vector<vector<bool>> boerd;
    vector<vector<long>>check({{0,1},{1,0},{0,-1},{-1,0}});
    vector<string> ans;
    for(int i = 0; i < h+1;i++){
        boerd.push_back(vector<bool>(w+1));
    }
    for(int i = 0; i < q;i++){
        long k;
        cin>>k;
        if(k==1){
            long l,c;
            cin>>l>>c;
            l-=1;c-=1;
            boerd[l][c]=true;
            for(int i = 0; i < 4;i++){
                if(l+check[i][0]>=0&&l+check[i][0]<h&&c+check[i][1]>=0&&c+check[i][1]<w){
                    if(boerd[l+check[i][0]][c+check[i][1]]){
                    long one_id = l*w+c;
                    long two_id = (l+check[i][0])*w+c+check[i][1];
                    uf.unite(one_id,two_id);
                }
                }
            }
        }
        else{
            long r1,c1,r2,c2;
            cin>>r1>>c1>>r2>>c2;
            r1-=1;c1-=1;r2-=1;c2-=1;
            long one_id = r1*w+c1;
            long two_id = r2*w+c2;
            if(boerd[r1][c1]&&boerd[r2][c2]){
                if(uf.same(one_id,two_id)){
                ans.push_back("Yes");
                continue;
            }
            }
            ans.push_back("No");
        }
    }
    for(int i = 0; i < ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}