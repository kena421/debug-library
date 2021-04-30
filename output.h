#ifndef OUTPUT_H
#define OUTPUT_H 6
#include <bits/stdc++.h>
using namespace std;
#define d(x) cout << #x << " = " << x << endl;
#define dij(x, y) cout << #x << " = " << x << " : " << #y << " = " << y << endl;
#define dijk(x, y, z) cout << #x << " = " << x << " : " << #y << " = " << y << " : " << #z << " = " << z << endl;
#define dijkl(w, x, y, z) cout << #w << " = " << w << " : " << #x << " = " << x << " : " << #y << " = " << y << " : " << #z << " = " << z << endl;
#define r(x) cout << "running " << x << endl;
#define rij(x, y) cout << "running " << x << " " << y << endl;
#define R cout << "running\n"<< endl;
#define rd(x) cout << "running " << #x << " = " << x << endl;
#define E cout<<"ending"<<endl;

//printing n number of variables
template <typename T>
void print(T i){
    cout<<i<<endl;
}
template <class T1,class T2>
void print(T1 i,T2 j){
    cout<<i<<" "<<j<<endl;
}
template <typename T1,typename T2,typename T3 >
void print(T1 i,T2 j, T3 k){
    cout<<i<<" "<<j<<" "<<k<<endl;
}
template <typename T1,typename T2,typename T3,typename T4 >
void print(T1 i,T2 j, T3 k, T4 l){
    cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
}

// =================================
//priting 1D, 2D, 3D vector
template <typename T = int>
void print(vector<T> Vector_1D){
    for (auto i : Vector_1D)
        cout<<i<<" ";
    cout<<endl;
}

template <typename T = int>
void print(vector<vector<T>> Vector_2D){
    for (auto i : Vector_2D){
        for (auto j : i){
            cout<<j<<" ";
        }
    cout<<endl;
    }
}
template <typename T>
void print(vector<vector<vector<T> > > Vector_3D){
    for (auto i : Vector_3D){
        for (auto j : i){
            for(auto k : j){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    }
}
//printing pair
template <typename T1 = int, typename T2 = int>
void print(pair<T1, T2> Pair){
    cout<<Pair.first<<" "<<Pair.second<<endl;
}

//printing pointer array
template <typename T = int>
void print(T *Array_Ptr, int Length){
    for(int i = 0; i < Length; i++){
        cout<<Array_Ptr[i]<<" ";
    }
    cout<<endl;
}


template <typename T>
void print(list<T> *s, int size){
    for(int i = 0; i< size; i++){
        cout<<i<<" : ";
        print<T>(s[i]);
    }        
}



template <typename T>
void print(stack<T> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}


#endif