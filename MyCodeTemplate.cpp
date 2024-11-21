/*/////////////////////////////////////////////////////////
    ⠀⠀⠀⠀⠀
   █████  ███    ██  ██████  ███    ██ ██████   ██████      
  ██   ██ ████   ██ ██    ██ ████   ██ ██   ██ ██    ██     
  ███████ ██ ██  ██ ██    ██ ██ ██  ██ ██   ██ ██    ██     
  ██   ██ ██  ██ ██ ██    ██ ██  ██ ██ ██   ██ ██    ██     
  ██   ██ ██   ████  ██████  ██   ████ ██████   ██████
     
/////////////////////////////////////////////////////////*/
          
#include <bits/stdc++.h>
using namespace std;

//////////////////////
// Debuging Purposes
//////////////////////

#ifdef MY_PC

    #define debug(...) debug_out(#__VA_ARGS__, __VA_ARGS__)
    template <typename T>
    void debug_out(const char* name, T&& value) {
        std::cout << name << " = " << value << std::endl;
    }
    template <typename T, typename... Args>
    void debug_out(const char* names, T&& value, Args&&... args) {
        const char* comma = strchr(names, ',');
        std::cout.write(names, comma - names) << " = " << value << " | ";
        debug_out(comma + 1, args...);
    }
#else
    #define debug(...)
#endif

/////////////////////////
//  Data Types
/////////////////////////
      
using u32 = unsigned int;
using u64 = unsigned long long;
using i32 = int;    
using i64 = long long;
using f64 = long double;

/////////////////////////
// Imporant Definitions
/////////////////////////

#define el "\n";
#define pb push_back
#define eb emplace_back
#define sz(a) ((int)(a.size()))
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define vi32 vector<i32>
#define vi64 vector<i64>

/////////////////////////
//  Important things
/////////////////////////

const i32 MOD = 1e9 + 7;
const i32 MAX = 1000000000;
const i32 INF = INT_MAX;
const i64 INFLL = LLONG_MAX >> 1;


/////////////////////////
// Has TestCases switch
/////////////////////////

bool hasTestCases = true;


/*---------------------------- BORDER HERE ----------------------------*/

void solve(i32 currentTestCaseIndex) {
    (void)currentTestCaseIndex; // Suppress unused warnings
    
    // Solution Here //
}

i32 main() {
    ios::sync_with_stdio(false);    
    cin.tie(nullptr);cout.tie(nullptr);
    i32 testCases = 1;
    if(hasTestCases)cin >> testCases;

#ifdef MY_PC
    auto start = chrono::high_resolution_clock::now(); // Start time
#endif

    //// Preprocessing Functions Here ////

    /////////////////////////////////////

    for (i32 testCase = 1; testCase <= testCases; ++testCase) {
        solve(testCase);
    }

#ifdef MY_PC
    auto end = chrono::high_resolution_clock::now(); // End time
    chrono::duration<double> elapsed = end - start;  // Calculate duration
    cout << "[Elapsed time: " << elapsed.count() << " seconds]\n";
#endif
    return 0;
}
