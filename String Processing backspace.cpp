#include <iostream>
#include <deque>
#include <string>
using namespace std;

string newString(string s){

    deque<char> q;

    for(int i=0;i<s.length();i++){
        if(s[i]!='#')q.push_back(s[i]);
        else if(!q.empty()) q.pop_back();
    }
    string t = "";
    while(!q.empty()){t+=q.front()
        ;q.pop_front();}
    return t;
}

int main(){
    string s;
    cin>>s;
    cout<<newString(s);
}
