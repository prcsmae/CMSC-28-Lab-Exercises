#include <iostream>
#include <string>
#include "Book.h"

using std::string;
using std::cout;
using std::cin;

int main(){
    Book reading("I Hope This Doesn't Find You", "Ann Liang", "1338827162", "Scholastic Inc.");
    cout << "\nI'm currently reading " << reading.getTitle() << " by " << reading.getAuthor();
    cout << "\nPublished by " << reading.getPublisher() << ". It's ISBN is: " << reading.getISBN() << ".";

    reading.setTitle("A Thousand Splendid Suns");
    reading.setAuthor("Khaled Hosseini");
    reading.setISBN("978-1-59448-950-1");
    reading.setPublisher("Riverhead Books");

    cout << "\n\nIf I decide to drop it I'll be reading " << reading.getTitle() << " next.\n";
    cout << "It is written by " << reading.getAuthor() << ". Published by " << reading.getPublisher();
    cout << " with ISBN: " << reading.getISBN() << ".";
    return 0;
}