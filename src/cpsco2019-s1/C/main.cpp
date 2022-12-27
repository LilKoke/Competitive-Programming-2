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

lint n, k;
lint a[10000000];
lint ans;
lint coins[20];

lint num_coin(lint sum){
    string s = to_string(sum);
    lint num = 0;
    REP(i, s.size()){
        if(((s[i] - '0') / 5) == 1) num += 1;
        num += (s[i] - '0') % 5;
    }
    return num;
}

void func(string cur, lint sum){
    if(cur.size() == k){
        ans = min(ans, num_coin(sum));
        return;
    }
    lint last = 0;
    if(cur.size() >= 1) last = cur[cur.size()-1] - '0' + 1;
    FOR(i, last, n){
        string nex = cur;
        nex += (i + '0');
        lint nex_sum = sum; 
        nex_sum += a[i];
        func(nex, nex_sum);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    REP(i,n) cin>>a[i];
    ans = inf;
    REP(i, 20){
        if(i % 2 == 0){
            coins[i] = 1;
            REP(j, i / 2) coins[i] *= 10;
        }
        else{
            coins[i] = 5;
            REP(j, i / 2) coins[i] *= 10;
        }
    }
    func("", 0);
    cout << ans << endl;
    return 0;
}
