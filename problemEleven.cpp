#include <iostream>
#include <string>
using namespace std;
void wcount(string s){
    int numWords = 1,p;
    p = s.find(" ");
    while(p >= 0){
        p = s.find(" ",p+1);
        if(p != -1){
            numWords++;
        }
    }
    numWords++;
    cout << "the string contains " << numWords << " words" << endl;
}
int main(){
    string input;
    cout << "Enter a string: "<< endl;
    getline(cin,input);
    wcount(input);
    return 0;
}