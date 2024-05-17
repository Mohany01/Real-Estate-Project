#ifndef USERSLIST_H
#define USERSLIST_H
#include "property.h"
#include "unordered_map"
#include "string"
#include "user.h"
#include <fstream>
using namespace std;
class UsersList
{
public:
    UsersList();
    static unordered_map<string, user >users;
    static unordered_map<string, user>::iterator it;
    //########## Add code #######//
    // static unordered_map<string, property >properties;
    // static unordered_map<string, property>::iterator ite;
    //##########  #######//

    static void SaveUsers(const string& filename);
    static void LoadUsers(const string& filename);
    //########## Add code #######//
    // static void loadUserProperties(const string& filename);
    // static void saveUserProperties(const string& filename);
    //##########  #######//
    static void _register(string,string,string,string,string);
    static bool login(string username, string password);
    static void EditFirstName(string username, string firstname);
    static void EditLastName(string username, string lastname);
    static void EditPassword(string username, string password);
    static void EditPhone(string username, string phone);
    static void EditData( string  , string  , string  , string  , string );
    static bool CheckUsername(string username);
    static string ReturnFirstName(string username);
    static string ReturnLastName(string username);
    static string ReturnPhoneNumber(string username)  ;
    static string ReturnNumberOfProperties(string username);
    static void deleteuser(string username);
    static int ReturnID(string username);
    //static void InsertUserProperty(string , int , int, int , int, string, string, string );
    static void InsertUserProperty(string , int , int, int , int, string, string, string );

    static void ShowProperties();
    static void ShowUserProperties(string username);
    static bool isAdmin(string username);
};

#endif // USERSLIST_H
