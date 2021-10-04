#include <iostream>
#include "classes.h"

int main() {

    // Start Structs data
    Architect ben;
    ben.name = "Ben ";
    ben.surname = "Smith";
    ben.age = 45;
    ben.work_experience = 20.5;

    Doors doors;
    doors.quantity = 1;
    doors.length = 3.2;
    doors.width = 1.5;
    doors.color = "Green";

    Windows windows;
    windows.quantity = 3;
    windows.window_rows = 4;
    windows.length = 1.6;
    windows.width = 2.3;
    windows.color = "White";

    Kitchen kitchen;
    kitchen.length = 3.5;
    kitchen.width = 5.4;
    kitchen.square_meter = kitchen.length * kitchen.width;
    kitchen.window = windows;
    kitchen.door = doors;

    Pantry pantry;
    pantry.length = 2.5;
    pantry.width = 3.8;
    pantry.square_meter = pantry.length * pantry.width;
    pantry.window = windows;
    pantry.door = doors;

    Dining_room dining_room;
    dining_room.length = 6.7;
    dining_room.width = 8.6;
    dining_room.square_meter = dining_room.length * dining_room.width;
    dining_room.window = windows;
    dining_room.door = doors;

    Bedroom bedroom;
    bedroom.length = 2.6;
    bedroom.width = 2.6;
    bedroom.square_meter = bedroom.length * bedroom.width;
    bedroom.window = windows;
    bedroom.door = doors;

    Apartment_residents apartment_residents;
    apartment_residents.quantity = 2;
    apartment_residents.resident[0] = "John";
    apartment_residents.resident[1] = "Ann";
    // End structs data

    // This is second class (Constructor)
    First_building build("Baker street", 4, "south-west", apartment_residents);

    // This is first class: Plan
    build.set_data(ben, kitchen, pantry, dining_room, bedroom);

    // վերադարձրել է Ճարտարապետի տվյալները;
    Architect data = build.get_architect();
    cout << "The architect of the plan is " << data.name << data.surname << ". He is "
    << data.age << " years old and has " << data.work_experience << " years of work experience. \n";

    // վերադարձրել է շենքի ընդհանուր քառակուսի մետրը
    double sqm = build.get_build_sqm();
    cout << "The total area of the house is " << sqm << " square meter. \n";

    // Կանչել է առաջին կլասսի մեթոդները երկրորդ կլասի միջոցով
    build.get_kitchen();
    build.get_pantry();
    build.get_dining_room();
    build.get_bedroom();

    // Կանչել է երկրորդ կլասսի մեթոդները
    build.get_address();
    build.get_floor();
    build.get_position();
    build.get_residents();

    return 0;
}
