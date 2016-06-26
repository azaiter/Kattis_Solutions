#include<stdio.h>
#include<string> 
#include<iostream> 
using namespace std; 

 int main()
 {
 	 string s1,s2; 
	 while(cin>>s1>>s2)
	 {
		 if(s1.find(s2) != std::string::npos)
			cout << "go\n";
		 else 
			cout << "no\n"; 
		 }
 }