#include <bits/stdc++.h>
using namespace std;
#define desync ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
#define eb emplace_back
template <class T>
void print_v(vector<T> &v) { for(auto x : v) cout << x << " "; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b;}

void solve(){
    //declarando tipos
    int n, ka, kb, aux;
    cin >> n >> k1 >> k2;
    vector<int> A(n);
    vector<int> B(n);



    //recebendo as entradas
    for(int i = 0; i< n; i++){
        cin >> A[i];
    }
    for(int i = 0; i< n; i++){
        cin >> B[i];
    }

    
}


int main(){
    desync;
    solve();
    return 0;
}