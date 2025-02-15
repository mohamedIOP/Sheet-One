#include <iostream>
using namespace std;
// 6.A
void StrToUpper(char str[]){
    str[0] = toupper(str[0]);
    for(int i = 1;str[i] != '\0';i++){
        if(str[i] == ' '){
            str[i+1] = toupper(str[i+1]);
        }
        else if(str[i - 1] != ' '){
            str[i] = tolower(str[i]);
        }
    }
}
// 6.B
int strcompare(char s1[],char s2[]){
    for(int i = 0;;i++){
        if(s1[i] != s2[i] || (s1[i] == '\0' && s2[i] == '\0')){
            return s1[i] - s2[i];
        }
    }
}
// 6.C
void stringCat(char s1[],char s2[]){
    int destination;
    for(int i = 0;;i++){
        if(s1[i] == '\0'){
            destination = i;
            break;
        }
    }
    for(int i = 0;;i++){
        if(s2[i] != '\0'){
            s1[destination] = s2[i];
            destination++;
        }
        else{
            s1[destination] = s2[i];
            break;
        }
    }
}
// 6.D
int stringLen(char s1[]){
    int i;
    for(i = 0;s1[i] != '\0';i++){
    }
    return i;
}
int main(){
    char str1[100],str2[100];
    cout << "Enter str1:" << endl;
    cin.getline(str1,100);
    cout << "Enter str2:" << endl;
    cin.getline(str2,100);
    cout << stringLen(str1) << " " << stringLen(str2) << endl;
    return 0;
}