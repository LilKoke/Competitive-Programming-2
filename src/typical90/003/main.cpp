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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<vector<int> > G(n);
    REP(i, n - 1){
        int a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }

    stack<int> s;
    s.push(0);
    vector<int> dist(n, inf);
    dist[0] = 0;
    while(!s.empty()){
        int pos = s.top();
        s.pop();

        for (int to: G[pos]){
            if(dist[to] == inf){
                dist[to] = dist[pos] + 1;
                s.push(to);
            }
        }
    }
    int deepest = 0; 
    int deepest_idx;
    REP(i, n){
        if(dist[i] > deepest){
            deepest_idx = i;
            deepest = dist[i];
        }
    }
    

    s.push(deepest_idx);
    REP(i, n) dist[i] = inf;
    dist[deepest_idx] = 0;
    while(!s.empty()){
        int pos = s.top();
        s.pop();

        for (int to: G[pos]){
            if(dist[to] == inf){
                dist[to] = dist[pos] + 1;
                s.push(to);
            }
        }
    }
    deepest = 0;
    REP(i, n){
        if(dist[i] > deepest){
            deepest = dist[i];
        }
    }
    cout << deepest + 1 << endl;
    return 0;
}
