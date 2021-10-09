#pragma once
#include "iostream"

class Human {
    std::string gender;

    std::string set_gender(){
        return this->gender;
    }
public:
    int work_experience;

    Human(std::string gend, int w_e){
        this->gender = gend;
        this->work_experience = w_e;
        std::cout << "-------- Person Constructor --------\n ";
    };

protected:

    void print_gender(){
        std::cout << "Gender - " << this->gender << "\n" ;

    }

public:

    ~Human(){
        std::cout << "\n-------- Person Destructor --------\n";
    }
};



