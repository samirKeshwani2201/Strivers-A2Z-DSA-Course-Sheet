#include <bits/stdc++.h>
using namespace std;

// void explainPair()
// {
//     pair<int, int> p = {1, 3};
//     cout << p.first << p.second << endl;
// }

// void explainVector()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(2);
// for (int i = 0; i < v.size(); i++)
// {
//     cout << v.at(i) << " ";
// }
// vector<pair<int, int>> vec;
// vec.push_back({1, 2});
// vec.emplace_back(1, 2);

// vector<int> v(5, 100);
// {100,100,100,100,100}
// vector<int> v(5);
// {0,0,0,0,0}

// vector<int>::iterator it = v.begin();
// vector<int>::iterator it = v.end();
// vector<int>::iterator it = v.rend();
// vector<int>::iterator it = v.rbegin();

// it++;
// cout << *(it) << " ";

// for (auto it = v.begin(); it != v.end(); it++)
// {
//     cout << *(it) << " ";
// }

// v.erase(v.begin() + 1);
// v.erase(v.begin(), v.begin() + 1);
// [start,end)

// Insert function

// v.insert(v.begin(), 100);
// v.insert(v.begin() + 1, 2, 10);
// vector<int> copy(2, 50);
// v.insert(v.begin(), copy.begin(), copy.end());
// v.pop_back();

// for (auto it : v)
// {
//     cout << it << ' ';
// }
// }

// void explainList()
// {
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(4);
//     ls.push_front(12);
//     ls.emplace_front(32);
// for (auto it = ls.begin(); it != ls.end(); it++)
// {
//     cout << *(it) << " ";
// }

// for (auto it : ls)
// {
//     cout << it << " ";
// }
// }

// void explainDeque()
// {
//     deque<int> dq;
//     dq.push_back(1);
//     dq.emplace_back(2);
//     dq.push_front(32);
//     dq.emplace_front(4);
//     for (auto it : dq)
//     {
//         cout << it << " ";
//     }

// }

// void explainStack()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(3);
//     st.emplace(5);
// }

// void explainQueue(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.emplace(4);

// }

// void explainPQ()
// {
// priority_queue<int>pq;
// pq.push(5);
// pq.push(2);
// pq.push(8);
// pq.emplace(10);

// Minimum Heap :
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(5);
//     pq.push(2);
//     pq.push(8);
//     pq.emplace(10);
// }

// void explainSet()
// {
//     set<int> st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);
//     st.insert(4);
//     st.insert(3);
// auto it =st.find(3);

// auto it = st.find(5);
// If an element is not in the set it will return end iterator that is point right after the end
// st.erase(5); erases 5 it takes logarithmic time
// either give element to erase or the iterator pointing to that
// }

// void explainMultiSet()
// {
// also stores duplicate element
// multiset<int> ms;
// ms.insert(1);
// ms.insert(1);
// ms.insert(1);

// ms.erase(1);
// all 1 erased

// ms.erase(ms.find(1));
// only  a single one erased

//     auto it = ms.find(1);
//     advance(it, 2);
// }

// void explainUSet(){
//     unordered_set<int>st;
// same as set but not store in sorted order
// lowerbound and upper_bound function not supported ,rest all functions are same
// it does not store in any particular order so has better complexity then set in most case
// }

// void explainMap()
// {
//     map<int, int> mp;
// mp[1] = 2;
// mp.emplace({3, 1});
//     map<pair<int, int>, int> mpp;
//     mpp[{2, 3}] = 1;
// }

// void explainMultiMap(){
// Everything is same as map ,only it can store multiple key
// only mm[key] cannot be used here and sorted
// }

// void explainUnorderedMap()
// {
// same as set and unordered_set difference
// unique key with sorted
// }

// bool comp(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.second < p2.second)
//     {
//         return true;
//     }
//     if (p1.second > p2.second)
//     {
//         return false;
//     }
//     if (p1.first > p2.first)
//     {
//         return true;
//     }
//     return false;
// }

// void explainExtra()
// {
// sort(a,a+n,greater<int>);
// sort in descending order
// pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
// sort it according to second element
// if second element is same ,then sort it according to first element but in descending

// sort(a, a + n, comp);
// }

void explainLbUb()
{
    // Lb:
    // returns the first occurence of an element if it occurs and if it doesnt occur then it returns the immediate greater element
    int a[] = {1, 4, 5, 6, 9, 9};

    // returns 1
    // int ind = lower_bound(a, a + 3, 4) - a;

    // returns 4
    // int ind = lower_bound(a, a + 3, 7) - a;

    // if no 7 then it will point to the next immediate greter element and here its 9

    // return 6
    // int ind = lower_bound(a, a + 3, 10) - a;

    // UB:
    // it returns an iterator which is next greater element of required element

// returns an pointer to 5 
    int ind = upper_bound(a, a + 6, 4) - a;

    // pointer to first 9 will return 
    int ind =upper_bound(a,a+6,7)-a;

// pointer to end 
    int ind =upper_bound(a,a+6,7)-a;
}
int main()
{

    return 0;
}