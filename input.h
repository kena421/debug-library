#ifndef INPUT_H
#define INPUT_H 5
#include <bits/stdc++.h>
#include "type.h"
using namespace std;

template <typename T>
vector <T> Input(int n=0)
{
    if(!n)
	    cin >> n;
	vector<T> V(n);
	for (T &i : V)
		cin >> i;
	return V;
}
template <typename T>
vector<vector<T>> Input(int m=0, int n=0)
{
    if(!m && !n)
	cin >> m >> n;
	vvi V(m, vi(n));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> V[i][j];
		}
	}
	return V;
}
template <typename T>
vector<T> Vector_Line_Input(){

	vector<T> V;
	string s;
	string str;
	getline(cin, s);
	stringstream ss1(s);
	stringstream ss;
	T temp;
	while (getline(ss1, str, ' '))
	{
		ss = stringstream(str);
		ss >> temp;
		V.emplace_back(temp);
	}
	return V;
}

template <typename T>
T Input()
{
	T temp;
	cin >> temp;
	return temp;
}

#endif