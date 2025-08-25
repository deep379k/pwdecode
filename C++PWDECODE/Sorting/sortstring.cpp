#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;
int main(){
    string str="AZYZXBDJKX";
    string s="";
    for(int i=0;i<=str.size();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
    }
    sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    
