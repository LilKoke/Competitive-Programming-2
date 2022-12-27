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

int N;
void func(string s, char biggest){
    if(s.size() == N){
        cout << s << endl;
        return;
    }
    REP(i, N){
        string nex = s;
        nex += ('a'+ i);
        char nex_biggest = biggest;
        if(biggest < ('a' + i)){
            nex_biggest = ('a' + i);
            func(nex, nex_biggest); 
            break;
        } else func(nex, nex_biggest);
    }
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    func("a", 'a');
    return 0;
}
