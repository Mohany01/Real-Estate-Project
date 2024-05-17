#ifndef USER_H
#define USER_H
#include<string>
#include<iostream>
#include<map>
using namespace std;
class user
{

    string FirstName, LastName, username, password;
    string phoneNumber;
    bool islogged = false;

public:
    user();
    ~user();
    string GetFirstName() const;
    string GetLastName() const;
    string GetUserName() const;
    string GetPassword() const;
    string GetNumberOfAppartements() const;
    void setFirstName();
    void setLastName();
    void setuserName();
    void setpassword();
    void setid(int id);
    void _register();
    void login();
    void containdigit(string);
    void DisplayInfo();
    void EditData();
    void EditData(string  , string  , string  , string );
    void InsertProperty();
    void SearchProperty();
    void SearchPropertyUsingLocation();
    void SearchPropertyUsingPrice();
    void SearchPropertyUsingType();
    void CompareProperty();
    void ListProperties();
    void CompareTwoProperty();
    void CompareTwoProperty(int, int);
    void CompareThreeProperty();
    void CompareFourProperty();
    void ListPropertiesforIndex(int);
    static bool CheckUser(string);
    static void _register(string,string,string, string ,string);
    static bool login(string username , string password );
    void setFirstName(string);
    void setLastName(string);
    void setpassword(string);
    void setuserName(string);
    void setPhone(string);
    string getPhone() const;
    void InsertProperty(string, int,int, int, int, string, string);
};

#endif // USER_H
