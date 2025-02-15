#include <iostream>
#include <cstring>
using namespace std;

int main ( ) 
{char ch, s[100], word[50];
int i, k, j;
strcpy (s," computer& logic& design & circuits#");
cout<<s<<endl; ch='&';
i=0; k=0; j=0;
while(s[i]!='#')
{ if(s[i] == ch) k++;
else { word[j]=s[i];j++;} i++;}
cout<<" number of deleted characters "<<k<<
" the new string "<<word<<endl; 
return 0;}