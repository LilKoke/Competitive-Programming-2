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

typedef pair<int, int> P;

using Graph=vector<vector<char> >;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h, w; cin>>h>>w;
    Graph G(h);
    int seen[h][w];
    int curh, curw;
    stack<P > s;
    REP(i, h){
        REP(j, w){
            char in; cin>>in;
            G[i].push_back(in);
            if(in == '#') seen[i][j] = 0;
            else if(in == 's'){
                curh = i;
                curw = j;
                seen[i][j] = 0;
                s.push(P(curh, curw));
            } else seen[i][j] = -1;
        }
    }
    vector<int> steph, stepw;
    steph = {-1, 1, 0, 0};
    stepw = {0, 0, 1, -1};
    bool flag = false;
    while(!s.empty()){
        P cur = s.top();
        s.pop();
        seen[cur.first][cur.second] = 0;
        int nexth, nextw;
        REP(i, 4){
            nexth = cur.first + steph[i];
            nextw = cur.second + stepw[i];
            if(nexth < 0 || nexth >= h || nextw < 0 || nextw >= w) continue; 
            else if(seen[nexth][nextw] == -1) s.push(P(nexth, nextw));
        }
        if(G[cur.first][cur.second] == 'g') flag = true;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
