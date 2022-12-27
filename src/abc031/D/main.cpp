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
    int k, n; cin>>k>>n;
    string v[n], w[n];
    REP(i,n) cin>>v[i]>>w[i];
    int ans[k];
    int m = 1;
    REP(i, k) m *= 3;
    int B[k];
    string word[k];
    REP(i, k) word[i] = "";
    for(int i = 0; i < m; i++){
        int power = 1;
        int flag = true;
        REP(j, k){
            B[j] = (i / power) % 3;
            power *= 3;
        }
        REP(j, n){
            int B_sum = 0;
            REP(l, v[j].length()){
                B_sum += B[(v[j][l] - '1')] + 1;
            }
            if(w[j].length() != B_sum) flag = false;
            else {
                int now = 0;
                REP(l, v[j].length()){
                    string cur_word = "";
                    FOR(p, now, now + B[v[j][l] - '1'] + 1){
                        cur_word += w[j][p]; 
                    }
                    word[v[j][l] - '1'] = cur_word;
                    now = now + B[v[j][l] - '1'] + 1; 
                }
            }
        }
        if(flag){
            REP(i, k) cout << word[i] << endl;
            break;
        }
    }
    return 0;
}
