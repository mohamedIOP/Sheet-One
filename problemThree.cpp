#include <iostream>
using namespace std;
float avg(float x[],int num,float &sum){
    sum = 0;
    for(int i = 0;i < num;i++){
        sum += x[i];
    }
    return sum/num;
}
int main(){
    /* 
        n students --> numberOfSTudents
        m courses --> numberOfCourses
    */
    const int numberOfStudents = 3, numberOfCourses = 4;
    float marks[numberOfStudents][numberOfCourses];
    for(int i = 0;i < numberOfStudents;i++){
        for(int j = 0;j < numberOfCourses;j++){
            cin >> marks[i][j];
        }
    }
    for(int i = 0;i < numberOfStudents;i++){
        float sum;
        float avgerage = avg(marks[i],numberOfCourses,sum);
        cout << "Student Num:" << i+1 << endl << "Avg: " << avgerage << ", Total Marks:" << sum << endl;
    }
    return 0;
}