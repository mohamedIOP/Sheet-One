#include <iostream>
#include <cstdio>
#include "stdio.h"
using namespace std;int main()
{char m[20], n[20];
for(int j=0;j<3;j++)
{ gets(m); gets(n);
cout<<" first string "<<m<<endl<<" second string "<<n <<endl;
int i=-1;int k=0;int x,y;
do{i++; x=m[i]; y=n[i];
cout<<m[i]<<" "<<x<<" "<<n[i]<<" "<<y<<endl;
if(m[i]!=n[i]) {k=m[i]-n[i];break;}
}while(m[i]||n[i]);
if(k==0) cout<<" equal , output= "<<k<<endl;
else{
cout<<" not equal " <<endl;
if(k>0)cout<<" first string is greater by "<<k;
else cout<<" first string is less by "<<k;}}
return 0; }

