 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<lint, lint> P;
 
using Graph=vector<vector<lint> >;

vector<lint> color;
map<lint, lint> ma;
bool dfs(const Graph &G, lint v, lint num, lint cur = 0){
    color[v] = cur;
    ma[num + cur]++;
    // cout << "yay" << endl;
    for (auto next_v : G[v]){
        if(color[next_v] != -1){
            if (color[next_v] == cur) return false;
            continue;
        }    
        if(!dfs(G, next_v, num, 1 - cur)) return false;
    } 
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n, m; cin>>n>>m;
    Graph G(n);
    REP(i, m){
        lint u, v; cin>>u>>v;
        u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    color.assign(n, -1);
    bool is_bipartite = true;
    lint num = 0;
    REP(v, n){
        if(color[v] != -1) continue;
        else{
            if(!dfs(G, v, num)) is_bipartite = false;
            num+=2;
        }
    }
    
    if(is_bipartite){
        lint dame = 0;
        for(auto e: ma){
            dame += e.second * (e.second - 1) / 2;
        }
        cout << n * (n - 1) / 2 - dame - m << endl;
    } else cout << 0 << endl;
    return 0;
}
