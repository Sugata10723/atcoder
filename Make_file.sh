#!/bin/bash

DIR_NAME="$1"

if [ -z "$DIR_NAME" ]; then
    echo "Help: $0 <Contest number>"
    exit 1
fi

FILE_LIST=(A B C D E F)

read -r -d '' SNIPPET <<'EOF'
#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define el '\\n'
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
EOF

if [ ! -d "$DIR_NAME" ]; then
    echo "Now making '$DIR_NAME' ... "
    mkdir "$DIR_NAME"
else
    echo "There is '$DIR_NAME' already."
fi

cd "$DIR_NAME" || exit

echo "Now making files ..."
for file in "${FILE_LIST[@]}"; do
    FILENAME="${file}.cpp"
    echo "$SNIPPET" > "$FILENAME"
    echo " -> ${FILENAME} "
done

echo "Completed!"

cd ../ || exit
