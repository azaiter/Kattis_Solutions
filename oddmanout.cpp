#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct ss
{
    unsigned long int x;
    bool check;
};

struct compare {
    bool operator()(const ss& first, const ss& second) {
        return (first.x < second.x);
    }
};

int main() {
	int cnt1;
	int cnt2;
	unsigned long int x;
	unsigned long int result = 0;
	vector<ss> vec;
	compare c;
	cin >> cnt1;
	for(int i=0;i<cnt1;i++)
	{
	    vec.clear();
	    result = 0;
		cin >> cnt2;
		for(int j=0;j<cnt2;j++)
		{
            cin >> x;
            vec.push_back({x,0});
		}
		sort(vec.begin(),vec.end(),c);
		for(unsigned long int z=0;z<vec.size();z++)
		{
		    if(vec[z].x == vec[z+1].x)
		    {
		        vec[z].check = 1;
		        vec[z+1].check = 1;
		    }
		}
		for(unsigned long int z=0;z<vec.size();z++)
		{
		    if(vec[z].check == 0)
		    {
		        result=vec[z].x;
		    }
		}
		cout << "Case #"<<i+1<<": "<<result<<endl;
	}
	return 0;
}