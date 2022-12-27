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
    lint h, w; cin>>h>>w;
    lint ans;
    if(h == 1 || w == 1) ans = 1;
    else if(h%2 == 0 && w % 2 == 0) ans = w * h / 2;
    else if(h%2 == 0 && w % 2==1) ans = (w + 1) / 2 * (h/2) + (w / 2) * (h/2);
    else if(h%2 == 1 && w % 2==0) ans = (w / 2) * h;
    else ans = (w + 1) / 2 * ((h + 1) / 2) + (w / 2) * (h / 2);
    cout << ans << endl;
    return 0;
}
