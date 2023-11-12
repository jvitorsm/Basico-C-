#include <iostream>
#include <climits>
#include <cmath>


using namespace std;


int main(){
    // Arithimetic operators = return the result of specific
    //                          arithimetic operation ( + - * / )
int students = 200;
int age = 22;
int class_room = 10;
int students_p_clss_room = INT_MIN;
double x = 20;
int y = 20;
int remainder = INT_MIN;



students++; //students+=1; //students = students + 1;

age--; //age-=´1; //age = age-1;

class_room*=2; //class_room = class_room * 2;

students_p_clss_room = students / class_room; // you can also divide use /= 

y /= 3; 

x /= 3;

remainder = students % 2; // % represents what was left of devision 


cout<<"students = "<< students<<'\n';
cout<<"age = "<< age<<'\n';
cout<<"Number of class room = "<< class_room<<'\n';
cout<<"Each class gonna have "<< students_p_clss_room<<" studens"<< '\n';
cout<<"x = "<< x <<'\n';
cout<<"y = "<<y<<'\n';
cout<<"remainder = "<<remainder<<'\n';

return 0;
}