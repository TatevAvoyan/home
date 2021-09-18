#include <iostream>
using namespace std;

class Building{
    int storeys_quantity;
    int planned_sum;
    int allocated_amount;
    char location[60];
public:
    int build_floors(int increased_amount){
        if(planned_sum < allocated_amount ){
            storeys_quantity + 1;
            increased_amount = allocated_amount - planned_sum;
        }
        return increased_amount;
    }
    void build_location(){
        cout << "The building will be located in " << location ;
    }
    void build_greeting_speech(){
        if(planned_sum < allocated_amount){
            cout << "Welcome to our " << storeys_quantity + 1 << " storey building.";
        } else {
            cout << "Welcome to our " << storeys_quantity  << " storey building.";
        }
    }

};

struct Cat{
    char name[20];
    int age;
    double weight;
};

struct Computer{
    char name[20];
    int ram;
    int ssd;
};

const int length = 5;
struct User{
    char name[10];
    char surname[10];
    int age;
    double weight;
    int appraisals[length];
    Cat lynda;
    Computer laptop;
};

struct Build{
    int doors_number;
    double length;
    User u[];
};


void a(User *u){
    (*u).lynda.age = 2;
    (*u).lynda.weight = 2.3;
    (*u).weight = 1.78;
    (*u).age = 23;
    (*u).laptop.ssd = 512;
    (*u).laptop.ram = 32;
    cout << "Enter Your Name. \n";
    cin >> (*u).name;
    cout << "Enter Your Surname. \n";
    cin >> (*u).surname;
    cout << "Enter User cat name \n";
    cin >> (*u).lynda.name;
    cout << "Enter User laptop brand \n";
    cin >> (*u).laptop.name;
    /*u.appraisals[0] = 4; u.appraisals[1] = 8; u.appraisals[2] = 6; u.appraisals[3] = 10; u.appraisals[4] = 9;
    for (int i = 0; i < length; i++) {
        cout << "array - " << u.appraisals[i] << "\n" ;
    }*/
    cout << (*u).surname << "\n" << (*u).name << " age " << (*u).age << " weight " << (*u).weight << "\n";
    cout << "User cat name " << (*u).lynda.name << "\n";
    cout << "User cat age " << (*u).lynda.age << "\n";
    cout << "User cat weight " << (*u).lynda.weight << "\n";
    cout << "User laptop brand is " << (*u).laptop.name << "\n";
    cout << "User laptop ram is " << (*u).laptop.ram << "gb \n";
    cout << "User laptop ssd is " << (*u).laptop.ssd << "gb \n";
}


int main() {

    User user1;
    Build user_house;
    user_house.length = 12.7;
    user_house.doors_number = 56;
    user_house.u[length] = {{53, 65}, {54, 64}};
    user_house.u[length].age = 34;
    a(&user1);

    return 0;
}
