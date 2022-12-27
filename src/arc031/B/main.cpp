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
    vector<vector<char> > G(10);
    stack<P > s;
    int seen[10][10];
    int sum = 0;
    bool flag = false;
    int starth, startw;
    REP(i, 10){
        REP(j, 10){
            char in; cin >> in;
            G[i].push_back(in);
            if(in == 'o' && !flag){
                starth = i;
                startw = j;
                flag = true;
                sum += 1;
            } else if(in == 'x'){
            } else {
                sum += 1;
            }
            seen[i][j] == -1;
        }
    }
    vector<int> steph = {-1, 1, 0, 0};
    vector<int> stepw = {0, 0, -1, 1};
    
    bool ans_flag = false;
    REP(i, 10){
        REP(j, 10){
            int connected = 0;
            bool changed = false;
            if(G[i][j] == 'x'){
                G[i][j] = 'o';              
                changed = true;
            }
            REP(p, 10){
                REP(q, 10){
                    seen[p][q] = -1;
                }
            }
            s.push(P(starth, startw));
            seen[starth][startw] = 0;

            while(!s.empty()){
                P cur = s.top();
                s.pop();
                connected += 1;
                REP(k, 4){
                    int nexth = cur.first + steph[k];
                    int nextw = cur.second + stepw[k];
                    if(nexth < 0 || nextw < 0 || nexth >= 10 || nextw >= 10) continue;
                    else if(G[nexth][nextw] == 'x' || seen[nexth][nextw] != -1) continue;
                    else if(seen[nexth][nextw] == -1){
                        s.push(P(nexth, nextw));
                        seen[nexth][nextw] = 0;
                    }
                }
            }
            if(connected == sum + 1){
                ans_flag = true;
            } 
            if(changed){
                G[i][j] = 'x';
                seen[i][j] = 0;
            }
        }
    }
    if(ans_flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
