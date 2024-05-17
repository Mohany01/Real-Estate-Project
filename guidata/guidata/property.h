#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>
#include <iostream>
#include <unordered_map>
#include <functional>
using namespace std;
template <class T>
inline void hash_combine(std::size_t& seed, const T& v) {
    seed ^= std::hash<T>{}(v) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}
class property
{
private:
    string name,username,type;
    string location;
    string description;
    int price;
    double area;
    int numOfbedrooms, numOfbathrooms;

public:
    property();
    property(const property& other);
    property(string name,string username, string location, string description, double price, double area, int numOfbedrooms, int numOfbathrooms);
    void showDetails() const;

    void setName(string);
    void setName();
    string getName() const;
    void setUserName(string );
    void setType(string);
    string getType()const;
    string  GetUserName() const;
    void setLocation(string);
    void setLocation();
    string getLocation() const;

    void setPrice(double);
    void setPrice();
    int getPrice()const;

    void setArea(double);
    void setArea();
    double getArea() const;

    void setnumOfbedrooms(int);
    void setnumOfbedrooms();
    int getnumOfbedrooms()const;

    void setnumOfbathrooms(int);
    void setnumOfbathrooms();
    int getnumOfbathrooms() const;

    void setDescription(string);
    void setDescription();
    string getDescription() const;


    // enum Property_Type {
    //     Apartement,
    //     Studio,
    //     Twin_House,
    //     Duplex,
    //     Pent_House
    // };

    int PropertytypeNumber;
    int getPropertytypeNumber() const;
    // Property_Type Propertytype;
    // void setType(int);
    // void setType();
    /*Property_Type getType();*/
    friend struct std::hash<property>;
    friend struct std::equal_to<property>;
    friend size_t hash_value(const property& p) {
        size_t seed = 0;
        hash_combine(seed, std::hash<std::string>{}(p.name));
        hash_combine(seed, std::hash<std::string>{}(p.location));
        hash_combine(seed, std::hash<std::string>{}(p.description));
        hash_combine(seed, std::hash<int>{}(p.price));
        hash_combine(seed, std::hash<double>{}(p.area));
        hash_combine(seed, std::hash<int>{}(p.numOfbedrooms));
        hash_combine(seed, std::hash<int>{}(p.numOfbathrooms));
        hash_combine(seed, std::hash<int>{}(p.PropertytypeNumber));
        return seed;
    }

    ~property();

};

namespace std {
template<>
struct hash<property> {
    size_t operator()(const property& p) const {
        size_t seed = 0;
        hash_combine(seed, std::hash<std::string>{}(p.name));
        hash_combine(seed, std::hash<std::string>{}(p.location));
        hash_combine(seed, std::hash<std::string>{}(p.description));
        hash_combine(seed, std::hash<int>{}(p.price));
        hash_combine(seed, std::hash<double>{}(p.area));
        hash_combine(seed, std::hash<int>{}(p.numOfbedrooms));
        hash_combine(seed, std::hash<int>{}(p.numOfbathrooms));
        hash_combine(seed, std::hash<int>{}(p.PropertytypeNumber));
        // Add other member variables as needed...
        return seed;
    }
};
}

#endif // PROPERTY_H
