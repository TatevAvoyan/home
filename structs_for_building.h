#pragma once
#include "iostream"

struct Architect{
    std::string name;
    std::string surname;
    int age;
    double work_experience;
};

struct Doors{
    int quantity;
    double length;
    double width;
    std::string color;
};

struct Windows{
    int quantity;
    int window_rows;
    double length;
    double width;
    std::string color;
};

struct Kitchen{
    double length;
    double width;
    double square_meter;
    Windows window;
    Doors door;
};

struct Pantry{
    double length;
    double width;
    double square_meter;
    Windows window;
    Doors door;
};

struct Dining_room{
    double length;
    double width;
    double square_meter;
    Windows window;
    Doors door;
};
struct Bedroom{
    double length;
    double width;
    double square_meter;
    Windows window;
    Doors door;
};

const int len = 2;
struct Apartment_residents{
    int quantity;
    std::string resident[len];
};
