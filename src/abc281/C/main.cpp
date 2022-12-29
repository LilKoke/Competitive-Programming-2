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
    lint N, T; cin>>N>>T;
    lint sum = 0;
    lint A[N]; 
    REP(i, N){
        cin>>A[i];
        sum+=A[i];
    }
    lint amari = T % sum; 
    REP(i, N){
        if(amari - A[i] < 0){
            cout << i + 1 << " " << amari << endl;
            break;
        } else {
            amari -= A[i];
        }        
    }
    return 0;
}
