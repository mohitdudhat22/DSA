#include <bits/stdc++.h>
using namespace std;

int main()
{
  // pair<int,int> p = {0,3};
  // cout << p.first << endl;

  // pair<int,pair<int,int>> p = {0,{3,5}};
  // cout << p.second.second << endl;

// pair<int,int>arr[] = { {1,2}, {2,5} , {5,1}};
// cout << arr[1].second << endl;
vector<int> v;
v.push_back(1);
v.emplace_back(6);
v.emplace_back(2);
vector<pair<int,int>> vec;
vec.push_back({1,2});
vec.emplace_back(1,2);
vector<int> v1(5,100);
vector<int> v2(5,20);
vector<int> v3(v2);
cout << vec[0].second << endl;
// vector<int>::iterator it =v.begin();
// cout << *(it);
// cout << *(++it);
// vector<int>::iterator it =v.end();
// cout << *(--it);

// vector<int>::iterator it = v.rend();
// cout << *(it);
// vector<int>::iterator it = v.rbegin();
// cout << *(it);
// v.erase(v.begin(),v.begin()+2);
// v.erase(v.begin());
// cout << v.back() << endl;
vector<int>vv(2,100);
vector<int>copy(2,500);
vv.insert(vv.begin(), 300);
vv.insert(vv.begin()+1, 2,200);
vv.insert(vv.begin()+2, copy.begin(),copy.end());
// vv.pop_back();
// v.clear();
// v.swap(vv);
for (auto itd : vv){
  cout << itd << " ";
}
// cout << vv.size();
cout << vv.empty();

//vector
//list
//dequeue
//queue
//priority queue
//stack
// set
//multi set
//unordered set
//map
//multi map
//unordered map


}