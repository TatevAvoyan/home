#pragma once
#include "base_class.h"
#include "third_class.h"


class User : public Human, public Test{
    int age;

    int get_age(){
        return this->age;
    };

public:
    std::string name;
    int dog_age;

    User(int a, std::string n, std::string g, int w, int a2) : Human(g, w), Test(a2){
        this->name = n;
        this->age = a;
        std::cout << "-------- User Constructor -------- \n ";
    };

    void print_age(){
        std::cout << "Age - " << this->get_age() << "\n";
        this->print_gender();
        this->protected_print_age1();
    };

    ~User(){
        std::cout << "\n-------- User Destructor --------\n";
    }
};
