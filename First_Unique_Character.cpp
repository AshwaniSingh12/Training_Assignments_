#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int res=-1;
    for(int i=0;i<s.size();i++){
        if(m.find(s[i])->second==1){
            res=i;
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}