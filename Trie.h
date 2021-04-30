#ifndef TRIE_H
#define TRIE_H 0
#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    TrieNode* children[26];
    bool end;
};

TrieNode* NewNode(){
    TrieNode* Node = new TrieNode;
    for(int i = 0 ; i < 26; i++){
        Node->children[i] = NULL;
    }
    Node->end = false;
    return Node;
}

class Trie{
    TrieNode* root;
    public:
    Trie();
    bool empty(TrieNode*);
    void insert(string s);
    void erase(string s);
    bool find(string);
    
};

bool Trie::empty(TrieNode* node){
    if (node->end) return false;
    for(int i = 0; i < 26; i++){
        if(node->children[i] != NULL) return false;
    }
    return true;
}

Trie::Trie(){
    root = NewNode();
}

void Trie::insert(string s){
    TrieNode* node = root;

    for(int i = 0; i < s.size(); i++){
        if(!node->children[s[i]-'a']) {
            node->children[s[i]-'a'] = NewNode();
        }

        node = node->children[s[i]-'a'];
    }
    node->end = true;    
}

void Trie::erase(string s){

    
}

bool Trie::find(string s){
    TrieNode* node = root;

    for(int i = 0; i < s.size(); i++){

        if(!node->children[s[i]-'a'])
            return false;
        node = node->children[s[i]-'a'];
    }
    if(node->end) return true;
    return false;
}


#endif