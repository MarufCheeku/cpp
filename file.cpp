#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "./MARUF.h"
#else
#define dbg(...) ;
#define debug(...) ;
#define crndl ;
#endif

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define nline          "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define print(a)       for(auto x : a) cout << x << " "; cout << nline

template <typename T> ostream &operator<<(ostream &out, const vector<T> &v) { out << "[ "; for (const auto &x : v) out << x << ", "; out << "] " << nline; return out; }
template <typename T> istream &operator>>(istream &in, vector<T> &v) { for (auto &x : v) in >> x; return in; }

int power(int a, int b) {int x = 1; while (b) {if (b & 1) x *= a; a *= a; b >>= 1;} return x;}
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int expo(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int mminvprime(int a, int b) {return expo(a, b - 2, b);}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

const int MOD = 1e9 + 7;

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    if (s == string(n, s[0])) {
        cout << s[0];
        return;
    }
    for (auto c : {'B', 'G', 'R'})
        if (count(s.begin(), s.end(), c) != n - 1)
            cout << c;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
    return 0;
}