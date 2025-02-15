#include <iostream>
#include <string>
using namespace std;
void reverse(string &s){
    int length = s.length();
    int requiredLoop = length/2;
    for(int i = 0;i < requiredLoop;i++){
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
int main(){
    string input;
    cin >> input;
    reverse(input);
    cout << input;
    return 0;
}