// Jomuad - UML Class Diagram

#include <iostream>
#include <string>
#include "Book.h" // Include the book class header file

// Use string, cout, and cin from standard namespace
using std::string;
using std::cout;
using std::cin;

int main(){
    // Create a new book object with initial values
    Book reading("I Hope This Doesn't Find You", "Ann Liang", "1338827162", "Scholastic Inc.");
    
    // Print out current book details
    cout << "\nI'm currently reading " << reading.getTitle() << " by " << reading.getAuthor();
    cout << "\nPublished by " << reading.getPublisher() << ". It's ISBN is: " << reading.getISBN() << ".";

    // Change the book details
    reading.setTitle("A Thousand Splendid Suns");
    reading.setAuthor("Khaled Hosseini");
    reading.setISBN("978-1-59448-950-1");
    reading.setPublisher("Riverhead Books");

    // Print out new book details
    cout << "\n\nIf I decide to drop it I'll be reading " << reading.getTitle() << " next.\n";
    cout << "It is written by " << reading.getAuthor() << ". Published by " << reading.getPublisher();
    cout << " with ISBN: " << reading.getISBN() << ".";
    
    return 0;
}