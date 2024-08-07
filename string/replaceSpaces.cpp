#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;


string replaceSpaces(string &str){
	
	while(str.back()==' ')
		str.pop_back();
	str.push_back('#');

	int i=0;
	while(str[i++]!='#'){
		if(str[i]==' '){
			str[i]='@';
			str.insert(i+1,"40");
		}
	}
	str.pop_back();

	return str;

}

int main(){

    string str="Coding Ninjas Is A Coding Platform";
    cout<<replaceSpaces(str);
    return 0;
}