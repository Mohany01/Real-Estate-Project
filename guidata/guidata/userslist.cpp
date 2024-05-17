#include "userslist.h"
#include <fstream>
#include <sstream>
#include <string>
#include "propertylist.h"
#include "user.h"
#include <unordered_map>
#include <vector>
#include "Property.h"
#include "login.h"
using namespace std;
unordered_map<string, user > UsersList::users;
unordered_map<string, user >::iterator UsersList::it;
//########## Add code #######//
 // unordered_map<string, property > UsersList::properties;
 // unordered_map<string, property>::iterator UsersList:: ite;
//##########  #######//
UsersList::UsersList() {
}

bool UsersList::CheckUsername(string username)
{
    if (users.find(username) != users.end())
    {
        cout << "Username already exists. Please choose a different one.\n";
        return true;
    }
    return false;
}

bool UsersList::isAdmin(string username)
{
    if(username=="1")
    {
        return true;
    }
    else
    {
      return  false;
    }
}

void UsersList::EditFirstName(string username, string firstname)
{
    for (it = users.begin(); it != users.end(); it++)
    {
        if (username == it->first)
        {
            it->second.setFirstName(firstname);
            break;
        }
    }
}

void UsersList::EditLastName(string username, string lastname)
{
    for (it = users.begin(); it != users.end(); it++)
    {
        if (username == it->first)
        {
            it->second.setLastName(lastname);
            break;
        }
    }
}

void UsersList::EditPassword(string username, string password)
{
    for (it = users.begin(); it != users.end(); it++)
    {
        if (username == it->first)
        {
            it->second.setpassword(password);
            break;
        }
    }
}

void UsersList::EditPhone(string username, string phone)
{
    for (it = users.begin(); it != users.end(); it++)
    {
        if (username == it->first)
        {
            it->second.setPhone(phone);
            break;
        }
    }
}

void UsersList::LoadUsers(const string& filename) {
    ifstream infile(filename);
    if (infile.is_open()) {
        UsersList::users.clear();
        string line;
        while (getline(infile, line)) {
            stringstream ss(line);
            string firstname, lastname, username, password, phone;

            getline(ss, firstname, ',');
            getline(ss, lastname, ',');
            getline(ss, username, ',');
            getline(ss, password, ',');
            getline(ss, phone, ',');

            user u;
            u.setFirstName(firstname);
            u.setLastName(lastname);
            u.setuserName(username);
            u.setpassword(password);
            u.setPhone(phone);

            UsersList::users[username] = u;
        }
        infile.close();
    } else {
        cerr << "Error: Unable to open file for reading.\n";
    }
}



void UsersList::SaveUsers(const string& filename) {
    ofstream outfile(filename);
    if (outfile.is_open()) {
        for (const auto& pair : UsersList::users) {
            const user& u = pair.second;
            outfile << u.GetFirstName() << ","
                    << u.GetLastName() << ","
                    << u.GetUserName() << ","
                    << u.GetPassword() << ","
                    << u.getPhone() << "\n";

            qDebug() << u.GetFirstName() << "\n";
            qDebug() << u.GetLastName() << "\n";
            qDebug() << u.GetUserName() << "\n";
            qDebug() << u.GetPassword() << "\n";
            qDebug() << u.getPhone() << "\n";
        }
        outfile.close();
    } else {
        cerr << "Error: Unable to open file for writing.\n";
    }
}


string UsersList::ReturnFirstName(string username)
{
    if(CheckUsername(username))
    {
        for (it = users.begin(); it != users.end(); it++)
        {
            if (username == it->first)
            {
                return it->second.GetFirstName();
            }
        }
    }
    else
    {
        return "false";
    }

}

string UsersList::ReturnLastName(string username)
{
    if(CheckUsername(username))
    {
        for (it = users.begin(); it != users.end(); it++)
        {
            if (username == it->first)
            {
            return it->second.GetLastName();
            }
        }
    }
    else
    {
        return "false";
    }
}

string UsersList::ReturnPhoneNumber(string username)
{
    if(CheckUsername(username))
    {
        for (it = users.begin(); it != users.end(); it++)
        {
            if (username == it->first)
            {
                return it->second.getPhone();
            }
        }
    }
    else
    {
        return "false";
    }
}

// string UsersList::ReturnNumberOfProperties(string username)
// {
//     // if(CheckUsername(username))
//     // {
//     //     for (it = users.begin(); it != users.end(); it++)
//     //     {
//     //         if (username == it->first)
//     //         {
//     //             return it->second.GetNumberOfAppartements();
//     //         }
//     //     }
//     // }
//     // else
//     // {
//     //     return "false";
//     // }
//}

bool UsersList::login(string username , string password ) {
        for (it = users.begin(); it != users.end(); it++)
        {
            if (username == it->first)
            {
                if (password == it->second.GetPassword())
                {
                    return true;
                    break;
                }
                else
                {
                    cout << "password is wrong" << endl;
                    return false;
                    break;
                }
            }
        }
}

void UsersList::_register(string firstname, string lastname, string username, string password , string phone) {
    user newuser;
    newuser.setFirstName(firstname);
    newuser.setLastName(lastname);
    newuser.setpassword(password);
    newuser.setuserName(username);
    newuser.setPhone(phone);
    users.insert(make_pair(username, newuser));
}


void UsersList::deleteuser(string username){
    users.erase(username);
    propertylist::DeleteUsersProperies(username);
}
void UsersList::EditData( string username , string firstname , string lastname , string password , string phone)
{
    for (it = users.begin(); it != users.end(); it++)
    {
        if (username == it->first)
        {
            it->second.EditData(firstname,lastname,password,phone);
            break;
        }
    }
}
