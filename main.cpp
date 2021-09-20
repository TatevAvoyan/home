#include <iostream>
using namespace std;

class Animals{
    string species;
    string type;
    double age;
    double length;
    double weight;

public:
    void set_animal_type(string species, string type){
        this->species = species;
        this->type = type;
    }
    void get_animal_type(){
        cout << "The animal is " << this->species << " it is " << this->type << "\n";
    }
    void set_animals_sizes(double age, double length, double weight){
        this->age = age;
        this->length = length;
        this->weight = weight;
    }
    void get_animals_sizes(){
        cout << this->species << " is " << this->age  << " age "  << this->length  << "m and " << this->weight << "kg \n";
    }


};


int main() {

    Animals zebra;
    zebra.set_animal_type("Zebra", "mammal");
    zebra.get_animal_type();
    zebra.set_animals_sizes(2.5, 45.5, 34.4);
    zebra.get_animals_sizes();

    return 0;
}
