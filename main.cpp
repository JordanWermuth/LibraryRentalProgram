// Name: Jordan Wermuth
// Section #
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "person.cpp"
#include "book.cpp"

using namespace std;

void printMenu() {
    cout << "----------Library Book Rental System----------" << endl;
    cout << "1.  Book checkout" << endl;
    cout << "2.  Book return" << endl;
    cout << "3.  View all available books" << endl;
    cout << "4.  View all outstanding rentals" << endl;
    cout << "5.  View outstanding rentals for a cardholder" << endl;
    cout << "6.  Open new library card" << endl;
    cout << "7.  Close library card" << endl;
    cout << "8.  Exit system" << endl;
    cout << "Please enter a choice: ";
}

 //You are not obligated to use these function declarations - they're just given as examples
void readBooks(vector<Book *> & myBooks, ifstream &inFile) {
    fstream inFile;
    vector<Book> myBooks;
    int bookId;
    string title, author, cat;
    inFile.open("books.txt");

    //check for error
    if (inFile.fail()){
        cerr << "Error in Opening File" << endl;
        exit(1);
    }
    int counter = 0;
    while(inFile >> bookId >> title >> author >> cat)
        {
            myBooks.push_back(bookId + " " + title + " " + author + " " + cat);


            // books.at[i] save to person ptr
            Book newBooks(bookId, title, author, cat);           //instantiates the object
            myBooks.push_back(newBooks);          // This adds a new object(newStudent) to vector newMyClass
            cout << endl;





        }
    cout << endl;
    inFile.close();



}



int readPersons(vector<Person *> & myCardholders) {
    ifstream inFile;
    int cardNo;
    bool act;
    string fName, lName;
    string desc = "";
    Person *ptr;
    vector<Book> myBooks;
    string line;
    inFile.open("persons.txt");

    //check for error
    if (inFile.fail()){
        cerr << "Error in Opening File" << endl;
        exit(1);
    }
    unsigned numEntries = 0;

    ifstream file(inFile.c_str());
    if (inFile >> numEntries)
    {
      for (unsigned i = 0; i < numEntries; i++)
      {
          inFile >> cardNo >> act;
          getline(inFile, desc);
          getline(inFile, desc);
          myCardholders.push_back(Person(cardNo, act, fName, lName))


      }

       //myCardholders.push_back(cardNo + " " + act + " " + fName + " "+ lName)

    }
}

void readRentals(vector<Book *> & myBooks, vector<Person *> myCardholders) {
    ifstream inFile;
    vector<Book> myBooks;
    int bookId, cardId;
    inFile.open("rentals.txt");

    //check for error
    if (inFile.fail()){
        cerr << "Error in Opening File" << endl;
        exit(1);
    }
    int counter = 0;
    while(inFile >> bookId >> cardId)
    {


    }
}

void openCard(vector<Person *> & myCardholders, int nextID) {
    return;
}

Book * searchBook(vector<Book *> myBooks, int id) {


    return nullptr;
}


int main()
{
    vector<Book *> books;
    vector<Person *> cardholders;
    ifstream inFile;
    
    int choice;
    do
    {
        // If you use cin anywhere, don't forget that you have to handle the <ENTER> key that 
        // the user pressed when entering a menu option. This is still in the input stream.
        printMenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Pleas Enter Card ID: ";


                break;

            case 2:
                // Book return
                break;

            case 3:
                // View all available books
                break;

            case 4:
                // View all outstanding rentals
                break;

            case 5:
                // View outstanding rentals for a cardholder
                break;

            case 6:
                // Open new library card
                break;

            case 7:
                // Close library card
                break;
                
            case 8:
                // Must update records in files here before exiting the program
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 8);
      return 0;
}
