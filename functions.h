#ifndef FUNCTIONS_H
#define FUNCTIONS_H 4
#include "header.h"
#include <bits/stdc++.h>
using namespace std;

//break string into vectors
vector <string> split(string s,const char* delimiter){
    vector <string> ans;
    char* token = strtok(const_cast<char*>(s.c_str()), delimiter);
    while(token){
        ans.emplace_back(token);
        token = strtok(NULL, delimiter);
    }
    return ans;
}

#endif
