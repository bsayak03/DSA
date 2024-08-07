#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    int counter=0;
    while(true){
        int pos = s.find(part);
        if(pos==string::npos)
            break;
        else{
            s.erase(pos, part.length());
            counter++;
        }
            
    }
    return s;
}

int main(){
    string s="daabcbaabcbc", part = "abc";
    cout<<removeOccurrences(s, part);
    return 0;
}