#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

struct nums1
{
	int x;
	int y;
	int z;
};


struct compare {
    bool operator()(const nums1& first, const nums1& second) {
        return (first.x < second.x);
    }
};
struct compare2 {
    bool operator()(const nums1& first, const nums1& second) {
        return (first.y < second.y);
    }
};

int main() {
	int cnt=0;
	int data=0;
	vector<nums1> vec1;
	vector<nums1> vec2;
	compare c;
	compare2 c2;
	while(cin >> cnt && cnt !=0)
	{
		vec1.clear();
		vec2.clear();
		for(int i=0;i<cnt;i++)
		{
			cin >> data;
			vec1.push_back({data,i,0});
		}
		
		sort(vec1.begin(),vec1.end(),c);

		for(int j=0;j<cnt;j++)
		{
			cin >> data;
			vec2.push_back({data,j,0});
		}
		sort(vec2.begin(),vec2.end(),c);
		for(int s=0;s<cnt;s++)
		{
			vec1[s].z = vec2[s].x;
		}
		sort(vec1.begin(),vec1.end(),c2);
		
		for(nums1 i : vec1)
		{
			cout << i.z << endl;
		}
			cout << endl;
	}
	return 0;
}