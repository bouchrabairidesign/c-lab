#include<iostream>
using namespace std;

int main(){
string s;
cout<<"Enter a string:";
cin>>s;

int f[26]={0};
int i;
for(i=0;i<s.length();i++){
f[s[i]-'a']++;
}

int ref=0;
for(i=0;i<26;i++){
if(f[i]>0){
ref=f[i];
break;
}
}

int diff=0;
for(i=0;i<26;i++){
if(f[i]>0){
if(f[i]!=ref){
if(abs(f[i]-ref)>1 && f[i]!=1){
cout<<"Invalid string"<<endl;
return 0;
}
diff++;
}
}
}

if(diff<=1)
cout<<"Valid string"<<endl;
else
cout<<"Invalid string"<<endl;

return 0;
}
