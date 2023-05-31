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

int n, m, h, k;
string s;
map<P, int> ma;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>h>>k;
    cin>>s;
    vector<int> a(n);
    REP(i, n){
        if(s[i] == 'R') a[i] = 0;
        if(s[i] == 'L') a[i] = 1;
        if(s[i] == 'U') a[i] = 2;
        if(s[i] == 'D') a[i] = 3;
    }

    REP(i, m){
        int x, y; cin>>x>>y;
        ma[make_pair(x, y)] = 1;
    }
    int curx = 0, cury = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int curh = h;
    int flag = true;
    REP(i, n){
        curx += dx[a[i]], cury += dy[a[i]];
        curh--;
        // cout << curx << cury << endl;
        if(curh < 0){
            flag = false;
            break;
        } else {
            if(ma[make_pair(curx, cury)] == 1 && curh < k){
                curh = k;
                ma[make_pair(curx, cury)] = 0;
            }
        }        
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
