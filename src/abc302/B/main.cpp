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
    int h, w; cin>>h>>w;
    char ch[101][101];
    REP(i, h){
        REP(j, w){
            cin >> ch[i][j];
        }
    }
    int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
    int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};
    int ans[5][2];
    string cur;
    bool flag = true;
    REP(i, h){
        REP(j, w){
            // initial pos = (i, j)
            if(flag){
                REP(k, 8){
                    cur = ch[i][j];
                    ans[0][0] = i + 1;
                    ans[0][1] = j + 1;
                    FOR(l, 1, 5){
                        int next_y = i + dy[k] * l;
                        int next_x = j + dx[k] * l;
                        if(next_x >= w || next_x < 0 || next_y >= h || next_y < 0) continue;
                        cur += ch[next_y][next_x];
                        ans[l][0] = next_y + 1;
                        ans[l][1] = next_x + 1;
                    }
                    if(cur == "snuke"){
                        flag = false;
                        break;
                    }
                }
            }
        }
    }
    REP(i, 5){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}
