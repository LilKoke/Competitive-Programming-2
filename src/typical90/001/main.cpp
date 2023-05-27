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

int n, l, k;
lint a[1 << 18];

bool is_ok(int m){
    int pre = 0;
    int num_set = 0;
    REP(i, n){
        if(a[i] - pre >= m && l - a[i] >= m){
            pre = a[i];
            num_set++;
        }
    }
    if(num_set >= k) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>l;
    cin>>k;
    REP(i, n){
        cin>>a[i];
    }
    int left = -1;
    int right = l;
    while(abs(right - left) > 1){
        int mid = (left + right) / 2;
        if(is_ok(mid)) left = mid;
        else right = mid;
    }
    cout << left << endl;
    return 0;
}
