#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>  split( char delim, string toSplit) {

  vector<string> toReturn;

  while(toSplit.find(delim) != string::npos) {
    int matchingIndex = toSplit.find(delim);
    string block = toSplit.substr(0, matchingIndex);
    toReturn.push_back(block);
    toSplit = toSplit.substr(matchingIndex+1, toSplit.length());
  }
 
  toReturn.push_back(toSplit);

  return toReturn;
}

struct checkit{
	string str;
	bool check;
};

int main() {
	int cnt=0;
	string main="";
	string animal="";
	//string sound="";
	string terminate="what does the fox say?";
	cin >> cnt;
	cin.ignore();
	for(int i=0;i<cnt;i++)
	{
		vector<checkit> strs;
		getline(cin,main);
	//	cout << main << " MAIN" << endl;
		for(auto s: split(' ', main)) {
    		strs.push_back({s,false});
  		}
  		getline(cin,animal);
		while(animal != terminate)
		{
			animal = animal.substr(animal.find("goes")+5);
			//cout << animal << endl;
			for(int j=0;j<strs.size();j++)
			{
				if(strs[j].str == animal) strs[j].check = true;
			}
			getline(cin,animal);
		}
		for(int y=0;y<strs.size();y++)
			{
				if(strs[y].check == false)  cout << strs[y].str << " ";
			}
			//if(strs[strs.size()-1].check == false)  cout << strs[strs.size()-1].str;
			//cout << strs[strs.size()-1].str << endl;
	}
	return 0;
}