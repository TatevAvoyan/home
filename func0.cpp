#include "iostream"
#include "func0.h"
using namespace std;

void print_struct(School *school){

    cout << "Enter school name. \n";
    cin >> school->name;
    cout << "Enter teacher name & surname. \n";
    cin >> school->Ann.name_surname;
    cout << "Enter teacher subject. \n";
    cin >> school->Ann.subject;
    cout << "What is Your name? \n";
    cin >> school->john.name;

    cout << "Hi " << school->john.name << "! \nSince you are " << school->john.age << " years old, you will be teaching in the " << school->john.class_num << " th grade. \n";
    cout << "Your " << school->john.rex.type << " " << school->john.rex.name << " can stay at our animal playground. \n";
    cout << "Your teacher is " << school->Ann.name_surname << ". She teaches " << school->Ann.subject << ". She taught for " << school->Ann.work_experience << " year. \n";
    cout << "Good luck with your studies ... ";
}