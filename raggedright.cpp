#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct compare {
    bool operator()(const string& first, const string& second) {
        return (first.length() < second.length());
    }
};
int main() {
	string str;
	vector<string> vec;
	vector<string> vec2;
	compare c;
	int len;
	int result=0;
	while(getline(cin,str))
	{
		vec.push_back(str);
	}
	vec2 = vec;
	sort(vec2.begin(),vec2.end(),c);
	len = vec2[vec2.size()-1].length();
	if(vec[vec.size()-1].length()<len)
		vec.pop_back();
	sort(vec.begin(),vec.end(),c);
	for(int i=0;i<vec.size()-1;i++)
	{
		result += (len-vec[i].length())*(len-vec[i].length());
	}
	cout << result;
	return 0;
}