#include "person.h"
#include <string>
#include <iostream>

Person::Person(int cardNo, bool act, string fName, string lName) {
    newCard = cardNo;
    newAct = act;
    newName = fName;
    newlName = lName

}

string Person::getFirstName() {
    return newName;
}

string Person::getLastName() {
    return newlName;
}

int Person::getId() {
    return 0;
}

void Person::setActive(bool act) {
    newAct = act;
} // complete

bool Person::isActive() {
    return true;
}

string Person::fullName() {
    return (newName + newlName);
}