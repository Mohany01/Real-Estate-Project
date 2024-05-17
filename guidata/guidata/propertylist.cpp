#include "propertylist.h"
#include "login.h"
#include <fstream>
#include <sstream>
unordered_map<property, string >propertylist::properties;
unordered_map<property, string>::iterator propertylist::it;
bool operator==(const property& lhs, const property& rhs) {
        return lhs.getName() == rhs.getName() &&
               lhs.getLocation() == rhs.getLocation() &&
               lhs.getDescription() == rhs.getDescription() &&
               lhs.getPrice() == rhs.getPrice() &&
               lhs.getArea() == rhs.getArea() &&
               lhs.getnumOfbedrooms() == rhs.getnumOfbedrooms() &&
               lhs.getnumOfbathrooms() == rhs.getnumOfbathrooms();
    }
propertylist::propertylist() {}
    void propertylist::loadUserProperties(const string& filename) {
        ifstream infile(filename);
        if (infile.is_open()) {
            propertylist::properties.clear();
            string line;
            while (getline(infile, line)) {
                stringstream ss(line);
                string username, type, propertyName, description, location;
                int area, numOfBedrooms, numOfBathrooms, price;

                getline(ss, username, ','); // Assuming fields are comma-separated
                getline(ss, type, ',');
                getline(ss, propertyName, ',');
                ss >> area >> numOfBedrooms >> numOfBathrooms >> price;
                ss.ignore(1, ','); // Ignore the comma after price
                getline(ss, description, ',');
                getline(ss, location);

                property p;
                p.setName(propertyName);
                p.setArea(area);
                p.setType(type);
                p.setnumOfbathrooms(numOfBathrooms);
                p.setnumOfbedrooms(numOfBedrooms);
                p.setPrice(price);
                p.setLocation(location);
                p.setDescription(description);

                propertylist::properties.insert(make_pair(p, username));
            }
            infile.close();
        } else {
            cerr << "Error: Unable to open file for reading.\n";
        }
    }

    void propertylist::saveUserProperties(const string& filename) {
        ofstream outfile(filename);
        if (outfile.is_open()) {
            for (const auto& pair : propertylist::properties) {
                const property& p = pair.first;
                outfile << pair.second << "," // Username
                        << p.getType() << "," // Type
                        << p.getName() << "," // Property Name
                        << p.getArea() << " " // Area
                        << p.getnumOfbedrooms() << " " // Bedrooms
                        << p.getnumOfbathrooms() << " " // Bathrooms
                        << p.getPrice() << "," // Price
                        << p.getDescription() << "," // Description
                        << p.getLocation() << "\n"; // Location
            }
            outfile.close();
        } else {
            cerr << "Error: Unable to open file for writing.\n";
        }
    }

 void propertylist::InsertUserProperty(string name,string type, int area , int numOfbedrooms , int numOfbathrooms , int price , string description , string location , string username)
 {

     property newproperty;
     //newproperty.setUserName(username);
     newproperty.setName(name);
     newproperty.setArea( area );
     newproperty.setType(type);
     newproperty.setnumOfbedrooms(numOfbedrooms);
     newproperty.setnumOfbathrooms(numOfbathrooms);
     newproperty.setPrice(price);
     newproperty.setDescription(description);
     newproperty.setLocation(location);
     properties.insert(make_pair(newproperty, username));


 }

 int propertylist::NumberOfPropertiesForUser(string username)
 {
     int counter =0;
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->second==username)
         {
             counter++;
         }
     }
     return counter;
 }
 bool propertylist::IsPropertyNameFound(string PropertyName)
 {
     for (it = properties.begin(); it != properties.end(); it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return true;
         }
     }
     return false;
 }

 bool propertylist::IsThisPropertyMine(string PropertyName)
 {
     for (it = properties.begin(); it != properties.end(); it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return true;
         }
     }
     return false;
 }
 void propertylist::DeleteProperty(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             properties.erase(it);
             break;
         }
     }
 }

 int propertylist::ReturnPropertyPrice(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getPrice();
             break;
         }
     }
 }

 string propertylist::ReturnPropertyDescription(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getDescription();
             break;
         }
     }
 }

 string propertylist::ReturnPropertytype(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getType();
             break;
         }
     }
 }

 int propertylist::ReturnPropertyArea(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getArea();
             break;
         }
     }
 }

 string propertylist::ReturnPropertylocation(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getLocation();
             break;
         }
     }
 }

 int propertylist::ReturnPropertyBathroomsNumber(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getnumOfbathrooms();
             break;
         }
     }
 }

 int propertylist::ReturnPropertyBedroomsNumber(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==PropertyName)
         {
             return it->first.getnumOfbedrooms();
             break;
         }
     }
 }
 string propertylist::ReturnOwner(string PropertyName)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {

         if(it->first.getName()==PropertyName)
         {
             return it->second;
             break;
         }
     }
 }

 void propertylist::EditProperty(string oldPropertyname ,string PropertyName , string type , int area , int numofbedrooms , int numofbathrooms , int price , string description , string location)
 {
     string username;
     property p;
     ////////////////////////
     if(PropertyName.empty())
     {
         p.setName(oldPropertyname);
     }
     else
     {
         if(IsPropertyNameFound(PropertyName))
         {
             return;
         }
         else
         {
             p.setName(PropertyName);
         }
     }
     /////////////////////
     if(type.empty())
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setType(it->first.getType());
                 break;
             }
         }

     }
     else
     {
         p.setType(type);
     }
    /////////////////////
     if(description.empty())
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setDescription(it->first.getDescription());
                 break;
             }
         }

     }
     else
     {
         p.setDescription(description);
     }
    //////////////////////
     if(location.empty())
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setLocation(it->first.getLocation());
                 break;
             }
         }

     }
     else
     {
         p.setLocation(location);
     }
    //////////////////////////
     if(area==NULL)
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setArea(it->first.getArea());
                 break;
             }
         }

     }
     else
     {
         p.setArea(area);
     }
    ////////////////////////
     if(numofbedrooms==NULL)
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setnumOfbedrooms(it->first.getnumOfbedrooms());
                 break;
             }
         }

     }
     else
     {
         p.setnumOfbedrooms(numofbedrooms);
     }
    ///////////////////////
    if(numofbathrooms==NULL)
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setnumOfbathrooms(it->first.getnumOfbathrooms());
                 break;
             }
         }

     }
     else
     {
         p.setnumOfbathrooms(numofbathrooms);
     }
    ////////////////////
     if(price==NULL)
     {
         for(it=properties.begin();it!=properties.end();it++)
         {
             if(it->first.getName()==oldPropertyname)
             {
                 p.setPrice(it->first.getPrice());
                 break;
             }
         }

     }
     else
     {
         p.setPrice(price);
     }
    //////////////////

     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->first.getName()==oldPropertyname)
         {
             properties.erase(it);
             username=it->second;
             break;
         }
     }
     properties.insert(make_pair(p,username));
}
 void propertylist::DeleteUsersProperies(string username)
 {
     for(it=properties.begin();it!=properties.end();it++)
     {
         if(it->second==username)
         {
             properties.erase(it);
         }
     }

 }



