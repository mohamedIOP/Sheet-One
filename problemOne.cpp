#include <iostream>
using namespace std;

int main(){
    const int numberElements = 10;
    int arrayOfNumbers[numberElements];
    // suplementing the array with elements from user
    cout << "Enter the elements:" << endl;
    for(int i = 0;i < numberElements;i++){
        cin >> arrayOfNumbers[i];
    }
    // initializing minimum and maximum value with the first element in the array
    int minimum = arrayOfNumbers[0], maximum = arrayOfNumbers[0];
    /* creating for loop to check for every element in the array two things:
        - if the current element is greater than maximum so you should put it in maximum
        - if the current element is smaller than minimum so you should put it in minmium
    */
    for(int i = 1;i < numberElements;i++){
        if(arrayOfNumbers[i] > maximum){
            maximum = arrayOfNumbers[i];
        }
        if(arrayOfNumbers[i] < minimum){
            minimum = arrayOfNumbers[i];
        }
    }
    // loging to user the values
    cout << "Minimum Value is " << minimum << ", Maximum Value is " << maximum;
}