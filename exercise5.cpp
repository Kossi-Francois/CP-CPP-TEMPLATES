

#include <bits/stdc++.h>
using namespace std;

//int64_t
typedef long long ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pl> vpl;
typedef vector<string> vs;                 

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()


#define f first
#define s second

#define coutfix(n) std::setprecision(n) << std::fixed 











int solution(int N, vi& A){



    return 0;
}





int main() {
	
	
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int TT;
    cin >> TT;
    for (int tt = 1; tt <= TT; ++tt) {
        ll N, K;
        cin >> N >> K;
        
        if(N > K){
            cout << -1 << endl;
        }else if(K == N){
            
            for(ll j=0; j<N; j++){
                cout << 1;
                if(j != N-1){
                    cout << " ";
                }
            }
            cout << endl;
            
        }else if(N==1){
            cout << K << endl;  
        }else{
            ll p = K-N;
            for(ll j=0; j<(N-1); j++){
                cout << 1 << " ";    
            }

           
            cout << p << endl;    
           

            
            
        }
        
    }
    
	
	return 0;
}




