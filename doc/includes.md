C++ Standard Libraries
===

## 1. vector
Declaration of N x D 2D vector: `vector<vector<int>> X(N, vector<int>(D))`

## 2. cmath
### abs(x)
x: int, float, etc...

### sqrt(x)
x: float, double, etc.. (not int)

### pow(x, y)
`x ^ y`

x, y: float, double, etc...

### hypot(x, y)
`sqrt(x*x + y*y)`


## 3. set
`set<T> my_set`

- Insert by `my_set.insert(c)`.
- Check existance: `my_set.find(c) == my_set.end()`
- Loop: `for (auto it = my_set.begin(); it != my_set.end(); it++) {`
    - => value: `*it`

## 4. algorithm
### sort()
In-place sort.

- `sort(v.begin(), v.end());`: ascending
- `sort(v.begin(), v.end(), greater<int>();`: descending

(`v: vector<t>`)

### max(), min()
`max(a, b)`, `max({a, b, c, ...})`

### max_element(), min_element()
Max / Min of vecotr.

`max_element(v.begin(), v.end())` (`v: vector<t>`)

Returns iterator. use `*max_element()` to get value.

### next_permutation
Permutation of vector. **Duplicates are removed!!!.**

e.g.)
```cpp
do {
    // use vector v
} while (next_permutation(v.begin(), v.end()));
```

## 5. functional

## 6. unordered_map
e.g.)
- `unordered_map<char, int> m;`
- Add: `m[c] = 2;`
- Key existance: `m.find(k) == m.end()`
- Loop: `for (auto it = m.begin(); it != m.end(); it++) {`
    - => key: `it->first`, value: `it->second`

## 7. stack
### stack
`stack<T>`
- `.push()`: Add element
- `.top()`: Read value of last element
- `.pop()`: Remove last in
- `.empty()`: Check if empty
- `.size()`: Stack size

## 8. queue

## 9. utility
### pair
e.g.)
- `pair<int, string> p = make_pair(1, "hello")`
- Get value: `p.first, p.second`

## 10. iomanip
### setprecision
e.g.)
- `cout << fixed << setprecision(4) << x << endl;`
    - => output: xx.xxxx