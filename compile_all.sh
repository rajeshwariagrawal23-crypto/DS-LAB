#!/usr/bin/env bash
set -eu
mkdir -p build
count=0
while IFS= read -r -d '' src; do
  name=$(basename "$src" .c)
  gcc -std=c11 -Wall -Wextra "$src" -o "build/$name"
  count=$((count+1))
done < <(find experiments -name '*.c' -print0)
echo "Compiled $count C programs into build/"
