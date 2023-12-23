#include<bits/stdc++.h>
using namespace std;
void explainPair();
void explainVector();
int main(){

    // explainPair();
    explainVector();
    return 0;
}

void explainPair(){
    pair<int,int> p ={1,2};
    cout<<p.first<<p.second;
    pair<int,pair<int,int>> l ={1,{2,3}};
    cout<<l.first<<l.second.first;
    pair<int,int> arr[]={{1,2},{2,5},{3,4}};
    cout<<arr[1].second;
}
void explainVector(){
//it is dynamic array

vector<int> v;

//push_back & emplace_back (faster then push_back)
v.push_back(1);//insert 1 into vector
v.emplace_back(2);//insert 2 into vector

vector<pair<int,int>> p;
p.push_back({1,2});
p.emplace_back(1,2);//automatically assume {}
}