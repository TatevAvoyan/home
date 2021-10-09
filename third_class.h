#pragma once
#include "iostream"

class Test{
    int num;

    void print_private(){
        std::cout << "Test private print function \n";
    }
protected:
    void protected_print_age1(){
        std::cout << "Test protected Age - " << this->num << "\n";
        this->print_private();
    }

public:
    Test(int a1){
        this->num = a1;
    }
    int test_public_print(int start, int end) {

        int i;
        for (i = start; i < end; i++) {
            std::cout << "Square " << i << " = " << i * i << "\n";
        }

        // i-1 ը գրել եմ որովհետև ցիկլից դուրս գալուց առաջ վերջին թիվը ստանում է, ստուգում, չի համապատասխանում ու դուրս է գալիս ցիկլից էդ արժեքը ստացված
        // եթե end֊ը զույգ թիվ չլինի առանց i-1 ֊ի կաշխատի;
        i = i-1;
        if (i % 2 == 0) {
            std::cout << "Hi\n";
            return i;
        } else {
            return i - 1;
        }
    }
    ~Test(){
        std::cout << "\n Test Destructor \n";
    }

};