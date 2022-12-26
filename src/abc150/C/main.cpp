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
    vector<int> p(n), q(n);
    REP(i,n) cin>>p[i];
    REP(i,n) cin>>q[i];
    int P[n];
    int a, b;
    int j = 1;
    REP(i,n) P[i] = i + 1;
    do{ 
        bool flagp = true;
        bool flagq = true;
        REP(i,n){
            if(P[i] != p[i]) flagp = false;
            if(P[i] != q[i]) flagq = false;
        }
        if(flagp) a = j;
        if(flagq) b = j;
        j++;
    }while(next_permutation(P, P + n));    
    cout << abs(a - b) << endl;
    return 0;
}
