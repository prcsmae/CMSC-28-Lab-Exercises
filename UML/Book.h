// Jomuad - UML Class Diagram

#include <iostream>
#include <string>

// Use string from standard namespace
using std::string;

// Define the Book class
class Book{
    // Private member variables
    string title;
    string author;
    string isbn;
    string publisher;

public:
    // Public constructor
    // Initializes a new instance of Book class with the given arguments
    Book(const string& title, const string& author, const string& isbn, const string& publisher)
        : title(title), author(author), isbn(isbn), publisher(publisher) {
    }

    // Returns the title
    string getTitle(){
        return title;
    }

    // Returns author
    string getAuthor(){
        return author;
    }

    // Returns ISBN
    string getISBN(){
        return isbn;
    }

    // Returns publisher
    string getPublisher(){
        return publisher;
    }

    // Sets a new title
    void setTitle(const string& bktitle){
        title = bktitle;
    }

    // Sets a new author
    void setAuthor(const string& bkauthor){
        author = bkauthor;
    }

    // Sets a new ISBN
    void setISBN(const string& bkisbn){
        isbn = bkisbn;
    }

    // Sets a new publisher
   void setPublisher(const string& bkpublisher){
        publisher = bkpublisher;
   }
};