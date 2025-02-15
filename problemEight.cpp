#include <iostream>
#include <string>
using namespace std;

int main(){
    const int numStudents = 5;
    string students[numStudents];
    for(int i = 0;i < numStudents;i++){
        getline(cin,students[i]);
    }
    int index;
    bool found = false;
    string studentNeeded;
    getline(cin,studentNeeded);
    for(int i = 0;i < numStudents;i++){
        if(students[i] == studentNeeded){
            index = i;
            found = true;
        }
    }
    if(found){
        cout << index + 1 << endl;
    }
    else{
        cout << "NOT FOUND!" << endl;
    }
    return 0;
}