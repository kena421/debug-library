#ifndef VALUE_H
#define VALUE_H 10
#include <bits/stdc++.h>
using namespace std;
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