        /**
 * author : shivam varshney
 * UIET KURUKSHETRA UNIVERSITY
 * 
 * Keep It Simple Silly (KISS)
 *
 * */

#include<bits/stdc++.h>
#pragma GCC optimise("Ofast")
#pragma GCC target("avx","avx2","fma")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define pi pair<int,int>
#define ff first
#define ss second

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(bool t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
inline void read(int &n,vector<int> &v){for(int i = 0 ; i < n ; i++) cin>>v[i];}
inline void print(int &n,vector<int> &v){for(int i = 0 ; i < n ; i++) cout<<v[i]<<" ";cout<<"\n";}
inline void read(int &n,int &m,vector<vector<int>> &v){for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>v[i][j];}}}
inline void print(int &n,int &m,vector<vector<int>> &v){for(int i=0 ;i<n;i++){for(int j=0;j<m;j++){cout<<v[i][j]<<" ";}cout<<"\n";}}


//some commanly used functions
bool isPrime(int n){if(n==2||n==3)return true;if(n==1||n%2==0||n%3==0)return false;for(int i=5 ;i*i<=n;i+=6)if(n%i==0||n%(i+2)==0)return false;return true;}
/*

    

*/

void solve(){
   int n,q;
   cin>>n>>q;
   vector<int> v(n);
   read(n,v);
   map<int,int> cnt;
   for(auto x : v){
    cnt[x]++;
   }
   int total = cnt.size()+1;

   while(q--){
    int ind,val;
    cin>>ind>>val;
    ind--;
    // if(cnt.find(val) == cnt.end()){
    //     if(cnt[v[ind]] > 1){
    //         cout<<total+1<<"\n";
    //     }else{
    //         cout<<total<<"\n";
    //     }
    // }else{
    //     if(cnt[v[ind]] > 1){
    //         cout<<total<<"\n";
    //     }else{
    //         cout<<total-1<<"\n";
    //     }
    // }
    cnt[v[ind]]--;
    if(cnt[v[ind]] == 0) cnt.erase(v[ind]);
    cnt[val]++;
    v[ind] = val;
    cout<<cnt.size()+1<<"\n";
   }
}

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("./input.txt","r",stdin);
        freopen("./output.txt","w",stdout);
        freopen("./error.txt", "w", stderr);
    #endif

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n";
    return 0;
}

