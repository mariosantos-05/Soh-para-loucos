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
    //psum basico
    ll n, q, aux, l, r;
    cin >> n >> q ;
    vector<ll> a;
    //evitando o "index out of range"
    a.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> aux;
        a.push_back(aux);
    }

    vector<ll> psum(n+1,0);//inicializado com tudo zerado
    for(int i = 1; i <= n; i++){
        psum[i] = a[i] + psum[i-1];
    }

    //realizando as Q consultas

    while(q--){
        cin >> l >> r;
        cout << psum[r] - psum[l-1] << "\n";
    }

}


int main(){
    desync;
    solve();
    return 0;
}