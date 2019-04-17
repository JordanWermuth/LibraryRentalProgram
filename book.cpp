#include "book.h"
#include <string>
#include <iostream>

Book::Book(int id, string bookName, string auth, string cat) {
    newId = id;
    newbookName = bookName;
    newAuth = auth;
    newCat = cat;
}

string Book::getTitle() {
    return newbookName;
}

string Book::getAuthor() {
    return newAuth;
}

string Book::getCategory() {
    return newCat;
}

int Book::getId() {
    return newId;
}
void Book::setPersonPtr(Person * ptr) {
ptr -> getPersonPtr();
}

Person * Book::getPersonPtr() {
    return nullptr;
}