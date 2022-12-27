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

int N, M;
void func(string cur) {
    if (cur.size() == N) { cout << cur << endl; return; }
    int last = 1;
    if (cur.size() >= 1) last = cur[cur.size() - 1];
    for (int i = last; i <= M; i++) {
        string nex = cur; nex += ('0' + i);
        func(nex);
    }
}

int fib(int n) {
    if (n == 0) return 0;
    cout << n << endl;
    return n + fib(n-1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    N = 3, M = 3;
    func("");
    int n = fib(3);
    cout << n << endl;
    return 0;
}
