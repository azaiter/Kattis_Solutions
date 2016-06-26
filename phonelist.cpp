    #include <iostream>
    #include <string>
    #include <vector>
    #include <climits>
    #include <algorithm>
    using namespace std;
     
    int main() {
    	string yn,str;
    	int cnt1,cnt2=0;
    	vector<string> vec;
    	cin >> cnt1;
    	for(int i=0;i<cnt1;i++)
    	{
    		yn = "YES";
    		vec.clear();
    		cin >> cnt2;
    		for(int j=0;j<cnt2;j++)
    		{
    			cin >> str;
    			vec.push_back(str);
    		}
    		sort(vec.begin(),vec.end());
    		for(int z=0;z<vec.size()-1;z++)
    		{
    			if(vec[z+1].find(vec[z])==0)
    			{
    				yn = "NO";
    				break;
    			}
    			
    		}
    		cout << yn << endl;
    	}
    	return 0;
    }