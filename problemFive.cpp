#include <iostream>
using namespace std;

int main(){
    char charInput;
    int destinationChar;
    cout << "Enter a charachter:" << endl;
    cin >> charInput;
    destinationChar = int(charInput);
    int currentDestination = 65;
    for(int i = 65;i <= destinationChar;i++){
        for(int j = currentDestination;j < destinationChar;j++){
            cout << " ";
        }
        for(int j = 65;j <= currentDestination;j++){
            cout << char(j);
        }
        for(int j = currentDestination - 1;j >= 65;j--){
            cout << char(j);
        }
        cout << endl;
        currentDestination++;
    }
    return 0;
}