#include <iostream>
#include <string>
using namespace std;
int main(){
    string searchedString;
    int numberOccurance = 0;
    char characterNeeded;
    cout << "Enter the string needed:" << endl;
    getline(cin,searchedString);
    cout << "Enter the charachter:" << endl;
    cin >> characterNeeded;
    for(int i = 0;searchedString[i] != '\0';i++){
        if(characterNeeded == searchedString[i]){
            numberOccurance++;
        }
    }
    cout << numberOccurance << endl;
    return 0;
}