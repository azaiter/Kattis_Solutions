#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//following three templates are copied from other sources.
template<class C, class T>
inline auto contains_impl(const C& c, const T& x, int)
-> decltype(c.find(x), true)
{ return end(c) != c.find(x); }

template<class C, class T>
inline bool contains_impl(const C& v, const T& x, long)
{ return end(v) != std::find(begin(v), end(v), x); }

template<class C, class T>
auto contains(const C& c, const T& x)
-> decltype(end(c), true)
{ return contains_impl(c, x, 0); }

int main() {
	string s1,s2;
	string enter = "entry";
	string exito = "exit";
	int cnt;
	vector<string> vec;
	cin >> cnt;
	for(int i=0;i<cnt;i++)
	{
		//vec.clear();
		cin >> s1 >> s2;
		if(s1 == enter)
		{
			if(contains(vec,s2))
			{
				cout << s2 << " entered (ANOMALY)" << endl;
			}
			else
			{
				cout << s2 << " entered" << endl;
				vec.push_back(s2);
			}
		}
		else if(s1 == exito)
		{
			if(contains(vec,s2))
			{
				cout << s2 << " exited" << endl;
				vec.erase(remove(vec.begin(), vec.end(), s2), vec.end());
			}
			else
			{
				cout << s2 << " exited (ANOMALY)" << endl;
			}
		}
		
	}
	return 0;
}