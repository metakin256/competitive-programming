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
using str = string;

struct UnionFind {
  std::vector<int> data;

  UnionFind() = default;

  explicit UnionFind(std::size_t sz) : data(sz, -1) {}

  bool unite(int x, int y) {
    x = find(x), y = find(y);
    if (x == y) return false;
    if (data[x] > data[y]) std::swap(x, y);
    data[x] += data[y];
    data[y] = x;
    return true;
  }

  int find(int k) {
    if (data[k] < 0) return (k);
    return data[k] = find(data[k]);
  }

  int size(int k) { return -data[find(k)]; }

  bool same(int x, int y) { return find(x) == find(y); }

  std::vector<std::vector<int>> groups() {
    int n = (int)data.size();
    std::vector<std::vector<int>> ret(n);
    for (int i = 0; i < n; i++) {
      ret[find(i)].emplace_back(i);
    }
    ret.erase(
        std::remove_if(ret.begin(), ret.end(),
                       [&](const std::vector<int>& v) { return v.empty(); }),
        ret.end());
    return ret;
  }
};

int main()
{
    long n,q;
    cin>>n>>q;
    UnionFind uf(n+1);
    for(int i = 0; i < q;i++){
        long x,y;
        cin>>x>>y;
        uf.unite(x,y);
    }
    long ans = 0;
    for(int i = 2; i < n+1;i++){
        if(!uf.same(1,i)){
            ans++;
            uf.unite(1,i);
        }
    }
    cout<<ans<<"\n";
}