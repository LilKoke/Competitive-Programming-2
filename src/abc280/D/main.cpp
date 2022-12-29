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

lint dp[100000];

bool is_prime(lint k){
    for(lint i = 2; i * i <= k; i++){
        if(k % i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint k; cin>>k;
    map<lint, lint> ma;
    bool flag = true;
    while(1){
        for(lint i = 2; i * i <= k; i++){
            if(k % i == 0){        
                k /= i;
                ma[i]++;
                break;
            }
        }
        if(is_prime(k)){
            ma[k]++;
            flag = false;
        }
        if(!flag) break;
    }
    lint ans = 0;
    for(auto e: ma){
        lint i = 0;
        // cout << e.first << " " << e.second << endl;
        lint tmp = 0;
        lint cur = e.first;
        while(1){
            while(cur % e.first == 0){
                cur /= e.first;
                i++;
            }
            if(i > e.second) break;
            tmp++;
            cur = e.first * tmp;
        }
        ans = max(ans, e.first*tmp);
    }
    cout << ans << endl;
    return 0;
}
