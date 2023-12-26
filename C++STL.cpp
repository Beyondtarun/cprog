#include <bits/stdc++.h>
using namespace std;
void explainPair();
void explainVector();
void explainList();
void explainDeque();
int main()
{

    // explainPair();
    // explainVector();
    explainList();
    return 0;
}

void explainPair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << p.second;
    pair<int, pair<int, int>> l = {1, {2, 3}};
    cout << l.first << l.second.first;
    pair<int, int> arr[] = {{1, 2}, {3, 5}, {6, 4}};
    cout << arr[1].second;
}
void explainVector()
{
    // it is dynamic array
    // indexing start from 0
    vector<int> v;

    // push_back & emplace_back (faster then push_back)
    v.push_back(11); // insert 1 into vector
    v.push_back(12);
    v.push_back(16);
    v.push_back(95);
    v.push_back(45);
    v.push_back(145);
    v.emplace_back(22);   // insert 22 into vector faster than push_back
    cout << v[0] << v[1]; // return garbage value on non existent index

    vector<pair<int, int>> p;
    p.push_back({1, 2});
    p.emplace_back(1, 2); // automatically assume {}
    cout << "\n"
         << p[0].first << " " << p[0].second;

    vector<int> a(5, 100); // a={100,100,100,100,100}
    vector<int> b(5);      // b={0,0,0,0,0} ; depends on compiler

    vector<int> c(a); // copy vector

    // ITERATORS

    vector<int>::iterator it = v.begin(); // points to the memrory of first index
    // it =it+2//shifts 2 index ahead;
    // vector<int>:: iterator it = v.end();//point to the null element or one ahead the last element we need to do it-- to point it on last element of the vector;
    // vector<int>:: iterator it = v.rend();//point before the zero index
    // vector<int>:: iterator it = v.rbegin(); //point to the last element
    cout << "\n"
         << *it;
    cout << "\n"
         << v.back(); // print last element
    cout << "\n Loop Begins";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << "\n"
             << *it;
    }

    // auto: auto assign the data type
    for (auto a : v)
    { // this is not a iterator
        cout << "\n"
             << a;
    }
    for (auto a = v.begin(); a != v.end(); a++)
    {
        cout << "\n"
             << *a;
    }

    // Deletion in a vector
    // v={11,12,16,95,45,145,22}
    cout << "\n\tdeletion";
    // v.erase(v.begin() + 1); // delete 12;- deletion by giving location
    v.erase(v.begin() + 1, v.begin() + 4); // delete 12,16,95 exclude last address v.erase(starting and end address)
    for (it = v.begin(); it != v.end(); it++)
    { // this is not a iterator
        cout << "\n"
             << *it;
    }

    // INSERT
    v.insert(v.begin(), 100); // insert 100 at first position
    // v.insert(v.begin()+1,v2.begin(),v2.end());//copy v2 vector into v1
    for (auto a : v)
    {
        cout << "\n"
             << a;
    }

    // v.swap(v2);//swap elemets of v2 and v2
    // v.size();
    // v.pop_back();//pop last element
    // v.clear()//empty vector
    // v.empty()//empty or not
}

void explainList()
{
    list<int> ls;
    ls.push_back(10);
    ls.push_back(10);
    ls.push_back(10);
    ls.push_front(20);  // push at first position similar to v.insert(v.begin)
    ls.emplace_front(); // insert 0 if nothing given
    for (auto a : ls)
    {
        cout << "\n"
             << a;
    }
    // rest all the functions are same
}

void explainDeque()
{

    deque<int> d ;
    
}