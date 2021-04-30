#ifndef LEETCODE_H
#define LEETCODE_H 2
#define MX INT_MAX
#define MN INT_MIN
#define ii <int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define si stack<int>
#define li list<int>
#define vb vector<bool>
#define vc vector<char>
#define vvc vector<vector<char>>
#define vs vector<string>
#define vvb vector<vector<bool>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define mimii map<int, mii>
#define mimii map<int, mii>
#define pii pair<int, int>
#define pipii pair<int, pii>
#define mib map<int, bool>
#define ll long long
#define l long
#define spii stack<pii>
#define vpii vector<pii>
#define fi first
#define se second
#define sz(x) x.size()
#define qi queue <int>
#define qpii queue <pii>
#define qpipii queue <pipii>
#define be begin()
#define en end()
#define NS nums.size()
#define NB nums.begin()
#define NE nums.end()
//loops
#define fr(i, intial, n) for(auto i = intial; i < n; i++)
#define fr0(i,n) for(auto i = 0; i < n; i++)
#define fri(i,arr) for(auto i = arr.begin(); i!=arr.end(); i++)
#define fra(i,arr) for(auto i  : arr)
//value
#define mod int(1e9+7)
#define NIL -1
enum COLOR{WHITE, GREY, BLACK };
        // R, D, L , U
int X4[] = {0,1,0,-1};
int Y4[] = {1,0,-1,0};
        // R D L U TR BR BL TL
int X8[] = {0,1,0,-1,-1, 1, 1,-1};
int Y8[] = {1,0,-1,0, 1, 1,-1,-1};

#endif

 std::vector<std::string> codes{std::string(N, '0')};
     std::string tmp = codes[0];
     tmp[N-1] = '1';
     codes.push_back(tmp);
     
     int bits = 1;
     
     while(bits < N)
     {
         int len = codes.size();
         for(int i=len-1; i>=0; --i)
         {
             std::string tmp = codes[i];
             tmp[N-bits-1] = '1';
             codes.push_back(tmp);
         }
         ++bits;
     }
     for(auto const & x : codes)
        std::cout << x << " ";