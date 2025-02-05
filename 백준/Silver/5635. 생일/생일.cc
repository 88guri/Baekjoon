#include <iostream>
using namespace std;

struct Student {
    string name;
    int day, month, year;
};


int main()
{
    int n;
    cin>>n;
    
    Student students[100];
    
    for(int i=0;i<n;i++){
        cin>>students[i].name>>students[i].day>>students[i].month>>
        students[i].year;
    }
    
    Student minStudent=students[0], maxStudent=students[0];
    for(int i=1;i<n;i++){
        if(students[i].year>minStudent.year||
        (students[i].year==minStudent.year&&students[i].month>minStudent.month)||
        (students[i].year==minStudent.year&&students[i].month==minStudent.month&&
        students[i].day>minStudent.day)){
            minStudent=students[i];
        }
        else if (students[i].year<maxStudent.year||
        (students[i].year==maxStudent.year&&students[i].month<maxStudent.month)||
        (students[i].year==maxStudent.year&&students[i].month==maxStudent.month
        &&students[i].day<maxStudent.day)){
            maxStudent=students[i];
        }
    }
    
    cout<<minStudent.name<<"\n"<<maxStudent.name;
    
    return 0;
}