#pragma once
#include "iostream"
#include "structs_for_building.h"

class Plan{
    Architect architect;
    Kitchen kitchen;
    Pantry pantry;
    Dining_room dining_room;
    Bedroom bedroom;
public:
    void set_data(Architect architect1, Kitchen kitchen1, Pantry pantry1, Dining_room dining_room1, Bedroom bedroom1){
        this->architect = architect1;
        this->kitchen = kitchen1;
        this->pantry = pantry1;
        this->dining_room = dining_room1;
        this->bedroom = bedroom1;
    }
    double get_build_sqm(){
        double build_sqm = this->bedroom.square_meter + this->kitchen.square_meter + this->dining_room.square_meter + this->pantry.square_meter;
        return build_sqm;
    }
    Architect get_architect(){
        return this->architect;
    }

    Kitchen get_kitchen(){
        cout << "\nKITCHEN\n ----------------- \n";
        cout << "Length - " << kitchen.length << " meters,\n"
             << "Width - " << kitchen.width << " meters,\n"
             << "Square meter - " << kitchen.square_meter << ",\n"
             << "The quantity of windows - " << kitchen.window.quantity << ",\n"
             << "Windows Length - " << kitchen.window.length << ",\n"
             << "Windows Width - " << kitchen.window.width << ",\n"
             << "Windows Color - " << kitchen.window.color << ",\n"
             << "The quantity of doors - " << kitchen.door.quantity << ",\n"
             << "Door Length - " << kitchen.door.length << " ,\n"
             << "Door Width - " << kitchen.door.width << ",\n"
             << "Door Color - " << kitchen.door.color << "\n";
    }
    Pantry get_pantry(){
        cout << "\nPANTRY\n ----------------- \n";
        cout << "Length - " << pantry.length << " meters,\n"
             << "Width - " << pantry.width << " meters,\n"
             << "Square meter - " << pantry.square_meter << ",\n"
             << "The quantity of windows - " << pantry.window.quantity << ",\n"
             << "Windows Length - " << pantry.window.length << ",\n"
             << "Windows Width - " << pantry.window.width << ",\n"
             << "Windows Color - " << pantry.window.color << ",\n"
             << "The quantity of doors - " << pantry.door.quantity << ",\n"
             << "Door Length - " << pantry.door.length << " ,\n"
             << "Door Width - " << pantry.door.width << ",\n"
             << "Door Color - " << pantry.door.color << "\n";
    }
    Dining_room get_dining_room(){
        cout << "\nDINING ROOM\n ----------------- \n";
        cout << "Length - " << dining_room.length << " meters,\n"
             << "Width - " << dining_room.width << " meters,\n"
             << "Square meter - " << dining_room.square_meter << ",\n"
             << "The quantity of windows - " << dining_room.window.quantity << ",\n"
             << "Windows Length - " << dining_room.window.length << ",\n"
             << "Windows Width - " << dining_room.window.width << ",\n"
             << "Windows Color - " << dining_room.window.color << ",\n"
             << "The quantity of doors - " << dining_room.door.quantity << ",\n"
             << "Door Length - " << dining_room.door.length << " ,\n"
             << "Door Width - " << dining_room.door.width << ",\n"
             << "Door Color - " << dining_room.door.color << "\n";
    }
    Bedroom get_bedroom(){
        cout << "\nBEDROOM\n ----------------- \n";
        cout << "Length - " << bedroom.length << " meters,\n"
             << "Width - " << bedroom.width << " meters,\n"
             << "Square meter - " << bedroom.square_meter << ",\n"
             << "The quantity of windows - " << bedroom.window.quantity - 2 << ",\n"
             << "Window Length - " << bedroom.window.length << ",\n"
             << "Window Width - " << bedroom.window.width << ",\n"
             << "Window Color - " << bedroom.window.color << ",\n"
             << "The quantity of doors - " << bedroom.door.quantity << ",\n"
             << "Door Length - " << bedroom.door.length << " ,\n"
             << "Door Width - " << bedroom.door.width << ",\n"
             << "Door Color - " << bedroom.door.color << "\n\n";
    }

};

class First_building : public Plan{
    string address;
    int floor;
    string position;
    Apartment_residents residents;

public:

    First_building(string address1, int floor_num, string position1, Apartment_residents residents1){
        cout << "This is constructor. \n";
        this->address = address1;
        this->floor = floor_num;
        this->position = position1;
        this->residents = residents1;
    }

    void get_address(){
        cout << "Address - " << this->address << "\n";
    }
    void get_floor(){
        cout << "Floor - " << this->floor << "\n";
    }
    void get_position(){
        cout << "Position - " << this->position << "\n";
    }
    Apartment_residents get_residents(){

        for (int i = 0; i < len; i++) {
            cout  << this->residents.resident[i] << ", ";
        }
        cout << "& others will live in this house. \n\n";
    }
    ~First_building(){
        cout << "This is Destructor\n";
    }
};
