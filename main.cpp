#include <iostream>
#include "func0.h"
using namespace std;


int main() {

    School number;
    number.num = 45;
    number.Ann.work_experience = 10.5;
    number.john.age = 12;
    number.john.class_num = 6;
    number.john.rex.type = "dog";
    number.john.rex.name = "Rex";

    print_struct(&number);

    return 0;
}
