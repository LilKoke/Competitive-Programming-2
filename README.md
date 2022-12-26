# Competitive-Programming-2
競プロ用環境 with Atcoder-tools

## 環境構築
```
sudo apt update
sudo apt upgrade
sudo apt install build-essential
```

コンパイラのバージョンの確認
```
gcc --version
```

VSCodeのエクステンションをインストール（以下は最低限）
- C/C++

## テストケースダウンロード＋ソースコード生成
```Competitive-Programing-2```直下にcdして
```
sh gen.sh <contest id>
```

## コンパイル
作業中のソースコードが入っている場所にcdして
```
atcoder-tools compile
```

## テストケース実行
作業中のソースコードが入っている場所にcdして
```
atcoder-tools test
```

## コード提出
作業中のソースコードが入っている場所にcdして
```
atcoder-tools submit
```

## 参考サイト
[競技プログラミングで問題に集中するためのtools Windows10 WSL用 「code-runner」「atcoder-tools」](https://qiita.com/masakinihirota/items/30a45cd250c0c99f8626)