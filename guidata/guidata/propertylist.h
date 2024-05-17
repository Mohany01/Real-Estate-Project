#ifndef PROPERTYLIST_H
#define PROPERTYLIST_H
#include "property.h"
#include <fstream>
using namespace std;
class propertylist
{
public:
    propertylist();
    static unordered_map<property, string >properties;
    static unordered_map<property, string>::iterator it;
    static int NumberOfPropertiesForUser(string username);
    static void loadUserProperties(const string& filename);
    static void saveUserProperties(const string& filename);
    static bool IsPropertyNameFound(string PropertyName);
    static bool IsThisPropertyMine(string PropertyName);
    static void DeleteProperty(string PropertyName);
    static int ReturnPropertyPrice(string PropertyName);
    static string ReturnPropertyDescription(string PropertyName);
    static string ReturnPropertytype(string PropertyName);
    static int ReturnPropertyArea(string PropertyName);
    static string ReturnPropertylocation(string PropertyName);
    static int ReturnPropertyBathroomsNumber(string PropertyName);
    static int ReturnPropertyBedroomsNumber(string PropertyName);
    static string ReturnOwner(string PropertyName);
    static void EditPropertyType(string username, string type);
    static void InsertUserProperty(string ,string, int , int, int , int, string, string, string );
    static void EditProperty(string  ,string  , string type , int area , int numofbedrooms , int numofbathrooms , int price , string description , string location);
    static void DeleteUsersProperies(string username);




};

#endif // PROPERTYLIST_H
