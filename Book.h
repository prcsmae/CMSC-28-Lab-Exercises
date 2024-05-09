#include <iostream>
#include <string>
using std::string;

class Book{
    string title;
    string author;
    string isbn;
    string publisher;

public:
    Book(const string& title, const string& author, const string& isbn)
        : title(title), author(author), isbn(isbn) {
    }

    string getTitle(){
        return title;
    }

    string getAuthor(){
        return author;
    }

    string getISBN(){
        return isbn;
    }

    string getPublisher(){
        return publisher;
    }

    string setTitle(const string& bktitle){
        title = bktitle;
        return title;
    }

    string setAuthor(const string& bkauthor){
        author = bkauthor;
        return author;
    }

    string setISBN(const string& bkisbn){
        isbn = bkisbn;
        return isbn;
    }

   string setPublisher(const string& bkpublisher){
        publisher = bkpublisher;
        return publisher;
   }
};