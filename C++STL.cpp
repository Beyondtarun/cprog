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
//indexing start from 0
vector<int> v;

//push_back & emplace_back (faster then push_back)
v.push_back(11);//insert 1 into vector
v.emplace_back(22);//insert 2 into vector
cout<<v[0]<<v[1]; //return garbage value on non existent index
vector<pair<int,int>> p;
p.push_back({1,2});
p.emplace_back(1,2);//automatically assume {}


vector<int> a(5,100); // a={100,100,100,100,100}
vector<int> b(5);//b={0,0,0,0,0} ; depends on compiler

vector<int> c(a);//copy vector

//ITERATORS

vector<int>:: iterator it = v.begin();//points to the memrory of first index
//it =it+2//shifts 2 index ahead;
//vector<int>:: iterator it = v.end();//point to the null element or one ahead the last element we need to do it-- to point it on last element of the vector;
//vector<int>:: iterator it = v.rend();//point before the zero index
//vector<int>:: iterator it = v.rbegin(); //point to the last element

cout<<*it;
}