// #ifndef DEBUG
// #define DEBUG 1
// #include <bits/stdc++.h>
// using namespace std;
// #define d(x) cerr << #x << " = " << x << endl;
// #define dij(x, y) cerr << #x << " = " << x << " : " << #y << " = " << y << endl;
// #define dijk(x, y, z) cerr << #x << " = " << x << " : " << #y << " = " << y << " : " << #z << " = " << z << endl;
// #define dijkl(w, x, y, z) cerr << #w << " = " << w << " : " << #x << " = " << x << " : " << #y << " = " << y << " : " << #z << " = " << z << endl;
// #define r(x) cerr << "running " << x << endl;
// #define rij(x, y) cerr << "running " << x << " " << y << endl;
// #define R cerr << "running\n"<< endl;
// #define rd(x) cerr << "running " << #x << " = " << x << endl;
// #define E cerr<<"ending"<<endl;

// //printing n number of variables
// template <typename T>
// void dbg(T i){
//     cerr<<i<<endl;
// }
// template <class T1,class T2>
// void dbg(T1 i,T2 j){
//     cerr<<i<<" "<<j<<endl;
// }
// template <typename T1,typename T2,typename T3 >
// void dbg(T1 i,T2 j, T3 k){
//     cerr<<i<<" "<<j<<" "<<k<<endl;
// }
// template <typename T1,typename T2,typename T3,typename T4 >
// void dbg(T1 i,T2 j, T3 k, T4 l){
//     cerr<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
// }

// // =================================
// //priting 1D, 2D, 3D vector
// template <typename T = int>
// void dbg(vector<T> Vector_1D){
//     for (auto i : Vector_1D)
//         cerr<<i<<" ";
//     cerr<<endl;
// }

// template <typename T = int>
// void dbg(vector<vector<T>> Vector_2D){
//     for (auto i : Vector_2D){
//         for (auto j : i){
//             cerr<<j<<" ";
//         }
//     cerr<<endl;
//     }
// }
// template <typename T>
// void dbg(vector<vector<vector<T> > > Vector_3D){
//     for (auto i : Vector_3D){
//         for (auto j : i){
//             for(auto k : j){
//                 cerr<<k<<" ";
//             }
//             cerr<<endl;
//         }
//     cerr<<endl;
//     }
// }
// //printing pair
// template <typename T1 = int, typename T2 = int>
// void dbg(pair<T1, T2> Pair){
//     cerr<<Pair.first<<" "<<Pair.second<<endl;
// }

// //printing pointer array
// template <typename T = int>
// void dbg(T *Array_Ptr, int Length){
//     for(int i = 0; i < Length; i++){
//         cerr<<Array_Ptr[i]<<" ";
//     }
//     cerr<<endl;
// }

// #endif