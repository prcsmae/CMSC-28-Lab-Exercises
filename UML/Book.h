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

    // Sets a new title and returns it
    string setTitle(const string& bktitle){
        title = bktitle;
        return title;
    }

    // Sets a new author and returns it
    string setAuthor(const string& bkauthor){
        author = bkauthor;
        return author;
    }

    // Sets a new ISBN and returns it
    string setISBN(const string& bkisbn){
        isbn = bkisbn;
        return isbn;
    }

    // Sets a new publisher and returns it 
   string setPublisher(const string& bkpublisher){
        publisher = bkpublisher;
        return publisher;
   }
};