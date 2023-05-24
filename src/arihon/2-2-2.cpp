#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;

int N, S[MAX_N], T[MAX_N];

pair<int, int> itv[MAX_N];

void solve(){
    // スタート時間と終わり時間をpairにして収納　（終わり時間でsortしたいため、Tをfirstにする）
    for (int i = 0; i < N; i++){
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    // 終わり時間でソートする
    sort(itv, itv + N);

    int ans = 0, t = 0;
    // t: 前回のタスクが終わった時間
    for (int i = 0; i < N; i++){
        // 開始時間が前回のタスクが終わった時間よりも後だったら、
        if (t < itv[i].second) {
            // できるタスク数を一つ増やす
            ans++;
            // 実行したタスクの終了時間をtに格納する
            t = itv[i].first;
        }
    }

    printf("%d\n", ans);
}