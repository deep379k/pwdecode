//sort a string in decreasing order of value associated after removal of valus smaller than X 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s ="AZYXYXCDEFGH";
string str = "";
for(int i=0;i<s.size();i++){
    if(s[i]<'X'){
        str.push_back(s[i]);
    }
}

for(int i=0;i<str.size();i++){
    cout<<str[i]<<" ";
    }
cout<<endl;
reverse(str.begin(),str.end());
cout<<str<<" ";
}