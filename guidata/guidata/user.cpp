#include "user.h"
#include "property.h"
#include "qdebug.h"
#include "qlogging.h"
#include <unordered_map>
#include <sstream>
#include "userslist.h"
// Define a specialization of std::hash for your property class
//namespace std {
//	template <>
//	struct hash<property> {
//		std::size_t operator()(const property& p) const {
//			// Use a combination of hash values of individual properties to create a unique hash
//			return std::hash<string>()(p.getName()) ^
//				std::hash<string>()(p.getLocation()) ^
//				std::hash<string>()(p.getDescription()) ^
//				std::hash<double>()(p.getPrice()) ^
//				std::hash<double>()(p.getArea()) ^
//				std::hash<int>()(p.getnumOfbedrooms()) ^
//				std::hash<int>()(p.getnumOfbathrooms());
//		}
//	};
//}
// Define equality operator for your property class
// bool operator==(const property& lhs, const property& rhs) {
//     return lhs.getName() == rhs.getName() &&
//            lhs.getLocation() == rhs.getLocation() &&
//            lhs.getDescription() == rhs.getDescription() &&
//            lhs.getPrice() == rhs.getPrice() &&
//            lhs.getArea() == rhs.getArea() &&
//            lhs.getnumOfbedrooms() == rhs.getnumOfbedrooms() &&
//            lhs.getnumOfbathrooms() == rhs.getnumOfbathrooms();
// }
// unordered_map<property , string > properties;
// // unordered_map<property , string >::iterator it2;

user::user() {

}
user::~user() {
}
string user::GetFirstName() const {
    return this->FirstName;
}


string user::GetLastName()const {
    return this->LastName;
}

string user::GetPassword() const{
    return this->password;
}


string user::GetUserName()const {
    return this->username;
}

string user::getPhone() const{
    return this->phoneNumber;
}
void user::setFirstName(string FirstName) {
    this->FirstName = FirstName;
}

void user::setLastName(string LastName) {
    this->LastName = LastName;
}

void user::setpassword(string password) {
    this->password = password;
}

void user::setuserName(string username) {
    this->username = username;
}
void user::setPhone(string phone) {
    this->phoneNumber = phone;
}




void user::DisplayInfo() {
    cout << "registration done:) \n";
    cout << "your name: " << FirstName + " " + LastName << "\n";
    cout << "your user name: " << username << "\n";
    //cout << "your password: " << password << "\n";

}
void user::EditData(string firstname , string lastname , string password , string phone) {
    this->setFirstName(firstname);
    this->setLastName(lastname);
    this->setpassword(password);
    this->setPhone(phone);
}






