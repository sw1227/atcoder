Programming contest practice
===
---


[Using Clang in Visual Studio Code](https://code.visualstudio.com/docs/cpp/config-clang-mac#_build-helloworldcpp)

## Build
`⇧⌘B`

→ If `hoge.cpp` is active, `hoge.out` will be generated to `bin`.

## Memo
- [データ型ごとの値の範囲](https://docs.microsoft.com/ja-jp/cpp/cpp/data-type-ranges?view=msvc-160)が10の何乗程度までかをまとめておきたい。
- 標準ライブラリのよく使う関数をリストアップ

## Snippet
Add user snippet for `.cpp`:

```json
{
  "Atcoder init": {
    "prefix": "init",
    "body": [
      "#include <iostream>",
      "",
      "using namespace std;",
      "",
      "int main() {",
      "    $0",
      "}",
    ],
    "description": "Initialize cpp file for Atcoder"
  },
  "include": {
    "prefix": "include",
    "body": [
      "#include <$0>"
    ],
    "description": "Include module"
  },
  "loop": {
    "prefix": "for",
    "body": [
      "for (int $1 = 0; $1 < $2; $1++)"
    ],
    "description": "basic for loop"
  },
  "cout": {
    "prefix": "cout",
    "body": [
      "cout << $0 << endl;"
    ],
    "description": "cout and endl"
  },
  "cin": {
    "prefix": "cin",
    "body": [
      "cin >> $0;"
    ],
    "description": "basic cin"
  }
}
```