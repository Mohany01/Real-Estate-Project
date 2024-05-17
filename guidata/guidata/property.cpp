#include "property.h"
#include <string>
#include <iostream>
#include <unordered_map>
#include <functional>
enum Property_Type {
    Apartement,
    Studio,
    Twin_House,
    Duplex,
    Pent_House
};
int PropertytypeNumber;
Property_Type Propertytype;
property::property() {}
property::property(string name, string username,string location, string description, double price, double area, int numOfbedrooms, int numOfbathrooms) : name(name), username(username), location(location), description(description), price(price), area(area), numOfbedrooms(numOfbedrooms), numOfbathrooms(numOfbathrooms)
{}
property::~property()
{}
string property::getName() const {
    return name;
};
string property::GetUserName()const {
    return username;
}
string property::getLocation() const {
    return location;
};
string property::getDescription() const {
    return description;
};
int property::getPrice() const {
    return price ;
};
double property::getArea() const {
    return area;
};
//Type property::getType() {
//    return this->type;
//};
string property::getType() const {
    return type ;
};
int property::getnumOfbathrooms() const {
    return numOfbathrooms;
}
int property::getnumOfbedrooms() const {
    return numOfbedrooms;
}
void property::setName(string name) {
    this->name = name;
}
void property::setName() {
    string name;
    cin >> name;
}
void property::setUserName(string username) {
    this->username = username;
}
void property::setType(string type) {
    this->type = type;
}
void property::setLocation(string location) {
    this->location = location;
}
void property::setDescription(string description)
{
    this->description = description;
}
void property::setPrice(double price) {
    this->price = price;
}
void property::setArea(double area) {
    this->area = area;
}
void property::setnumOfbathrooms(int numOfbathrooms) {
    this->numOfbathrooms = numOfbathrooms;
}
void property::setnumOfbedrooms(int numOfbedrooms) {
    this->numOfbedrooms = numOfbedrooms;
}

void property::setLocation() {
    string location;
    cin >> location;
}
void property::setDescription() {
    string description;
    cin >> description;
}
//property::Property_Type getType() const
//{
//   return Propertytype
//}
void property::setPrice() {
    double price;
    cin >> price;
}
void property::setArea() {
    double area;
    cin >> area;
}
void property::setnumOfbathrooms() {
    int numOfbathrooms;
    cin >> numOfbathrooms;
}
void property::setnumOfbedrooms() {
    int numOfbedrooms;
    cin >> numOfbedrooms;
}
// void property::setType(int x) {
//     switch (x)
//     {
//     case 1:
//         this->Propertytype = Apartement;
//         break;
//     case 2:
//         this->Propertytype = Duplex;
//         break;
//     case 3:
//         this->Propertytype = Twin_House;
//         break;
//     case 4:
//         this->Propertytype = Pent_House;
//         break;
//     case 5:
//         this->Propertytype = Studio;
//         break;
//     default:
//         break;
//         this->Propertytype = Apartement;
//     }
// }
// void property::setType() {
//     int x;
//     cout << "[1] Apartement " << endl;
//     cout << "[2] Duplex " << endl;
//     cout << "[3] Twin_House " << endl;
//     cout << "[4] Pent_House " << endl;
//     cout << "[5] Studio " << endl;
//     cin >> x;
//     switch (x)
//     {
//     case 1:
//         this->Propertytype = Apartement;
//         this->PropertytypeNumber = 1;
//         break;
//     case 2:
//         this->Propertytype = Duplex;
//         this->PropertytypeNumber = 2;
//         break;
//     case 3:
//         this->Propertytype = Twin_House;
//         this->PropertytypeNumber = 3;
//         break;
//     case 4:
//         this->Propertytype = Pent_House;
//         this->PropertytypeNumber = 4;
//         break;
//     case 5:
//         this->PropertytypeNumber = 5;
//         this->Propertytype = Studio;
//         break;
//     default:
//         this->Propertytype = Apartement;
//         this->PropertytypeNumber = 1;
//         break;
//     }
// }

void property::showDetails() const
{
    cout << "the name of the property : " << this->getName() << endl;
    cout << "the property location : " << this->getLocation() << endl;
    cout << "the price " << this->getPrice() << "$" << endl;
    cout << "the approximate area " << this->getArea() << " meter square" << endl;
    cout << "property has " << this->getnumOfbedrooms() << " bedrooms" << endl;
    cout << "property has " << this->getnumOfbathrooms() << " bathrooms" << endl;
    cout << "property description " << this->getDescription() << endl;
}

int property::getPropertytypeNumber() const
{
    return this->PropertytypeNumber;
}

property::property(const property& other)
    : name(other.name),
    location(other.location),
    description(other.description),
    price(other.price),
    area(other.area),
    numOfbedrooms(other.numOfbedrooms),
    numOfbathrooms(other.numOfbathrooms),
    type(other.type) {}

