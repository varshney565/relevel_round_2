// 5

// 5 1 2 4 3

// Sample Output 1

// 2

// Explanation of Sample 1
// Enemies of child 1 are: child 5
// Enemies of child 2 are: child 5
// Enemies of child 3 are: no enemies
// Enemies of child 4 are: no enemies
// Enemies of child 5 are: child 1, child 2

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
   int n;
   cin>>n;
   vector<int> v(n);
   read(n,v);
   map<int,int> cnt;
   for(auto x : v){
    cnt[x]++;
   }
   int ans = 0;
   for(int i = 0 ; i < n ; i++){
    //check if ith one has any enemy or not.
    bool ok = true;
    for(int j = 0 ; j <= 32ll ; j++){
        int val = pow(2ll,j);
        int diff = val-v[i];
        if(val > v[i] && cnt.find(diff) != cnt.end()){
            if(diff == v[i]){
                if(cnt[diff] > 1){
                    ok = false;
                    break;
                }
            }else{
                ok = false;
                break;
            }
        }
    }
    if(ok){
        ans++;
    }
   }
   cout<<ans<<"\n";
}

signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("./input.txt","r",stdin);
        freopen("./output.txt","w",stdout);
        freopen("./error.txt", "w", stderr);
    #endif

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<"\n";
    return 0;
}

