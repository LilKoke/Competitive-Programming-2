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
    int n; cin>>n;
    vector<int> a(n);
    REP(i, n) cin>>a[i];
    sort(all(a));
    // REP(i, n) cout << a[i] << endl;
    int q; cin>>q;
    REP(i, q){
        int left = -1;
        int right = a.size();
        int b; cin>>b;
        while(right - left > 1){
            int mid = (left + right) / 2;
            if(a[mid] > b) right = mid;
            else left = mid; 
        }
        int ans;
        if(left == -1) ans = abs(a[right] - b);
        else if(right == a.size()) ans = abs(a[left] - b);
        else ans = min(abs(a[left] - b), abs(a[right] - b));
        // cout << left << " " << right << endl;
        cout << ans << endl;
    }

    return 0;
}
