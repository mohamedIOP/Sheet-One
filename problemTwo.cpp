#include <iostream>
using namespace std;

int main(){
    const int numberElements = 10;
    int arrayElements[numberElements];
    cout << "Enter the elements:" << endl;
    for(int i = 0;i < numberElements;i++){
        cin >> arrayElements[i];
    }
    int maximumLengthOfLoop = numberElements/2;
    for(int i = 0;i < maximumLengthOfLoop;i++){
        int lastIndex = numberElements-(i+1);
        int temp = arrayElements[lastIndex];
        arrayElements[lastIndex] = arrayElements[i];
        arrayElements[i] = temp; 
    }
    for(int i = 0;i < numberElements;i++){
        cout << arrayElements[i] << " ";
    }
    return 0;
}