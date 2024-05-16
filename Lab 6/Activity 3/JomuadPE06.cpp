#include <iostream>
#include <string>
#include <list>
#include "Movie.h" // Include path to Movie.h

using std::string;
using std::list;
using std::endl;
using std::getline;
using std::cout;
using std::cin;

int main(){
    cout << "\nThis program will create a directory of information about a movie using user input.\n";
    cout << "\nProgrammed by: Precious Mae E. Jomuad\n";

    // Declaration of string variables
    string title, synopsis, rating, genre;

    // Creating an object of class Movie
    Movie movie1;

    // User input for movie title
    cout << "\nEnter movie title: ";
    getline(cin, title);
    // Sets the movie title using setTitle() method defined in class Movie
    movie1.setTitle(title);

    // User input for synopsis
    cout << "\nEnter synopsis: ";
    getline(cin, synopsis);
    // Sets the movie synopsis using setSynopsis() method defined in class Movie
    movie1.setSynopsis(synopsis);
    
    // User input for rating
    cout << "\nEnter MPAA Rating: ";
    getline(cin, rating);
    // Sets the movie rating using setRating() method defined in class Movie
    movie1.setRating(rating);

    // Declaration of variable choice to be used in the do-while loops below
    int choice;

    // Do-while loop that asks for the genre/genres of the movie
    do {
        cout << "\nWhat is/are the genre(s): ";
        getline(cin, genre);

        // Adds the genre to the list in class Movie
        movie1.addGenre(genre);

        // Asks if there are any more entries to add so the loop can end or repeat
        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        // Clears input buffer
        cin.ignore(); 

        // Breaks the loop if user enters 0
        if (!choice) {
            break;
        }

    } while (1);

    // Code block to ask for user input on directors
    cout << "\nWho is/are the director(s): \n";
    
    // Creates an object of class Person
    Person director;

    // Do-while loop that asks for information for the attributes in the class Person
    do{
        string fn, ln, gender;
        
        cout << "\nEnter first name: ";
        getline(cin, fn);
        // Sets the fname in class Person
        director.setFName(fn);

        cout << "\nEnter last name: ";
        getline(cin, ln);
        // Sets the lname in class Person
        director.setLName(ln);

        cout << "\nEnter gender: ";
        getline(cin, gender);
        // Sets gender in class Person
        director.setGender(gender);

        // Adds the object to the list in class Movie
        movie1.addDirector(director);

        // Asks user if there are any more entries
        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        // Clears input buffer
        cin.ignore();

        // Breaks the loop if user enters 0
        if (!choice){
            break;
        }
    } while(1);

    // Code block to ask for user input on actors/actresses of the movie
    cout << "\nWho is/are the actor(s)/actress(es): \n";
    // Creates an object of class Person
    Person actor;

    // Do-while loop that asks for information for the attributes in the class Person
    do{
        string fn, ln, gender;
        
        cout << "\nEnter first name: ";
        getline(cin, fn);
        // Sets fname in class Person
        actor.setFName(fn);

        cout << "\nEnter last name: ";
        getline(cin, ln);
        // Sets lname in class Person
        actor.setLName(ln);

        cout << "\nEnter gender: ";
        getline(cin, gender);
        // Sets gender in class Person
        actor.setGender(gender);

        // Adds the object to the list in class Movie
        movie1.addActor(actor);
        
        // Asks user if there are any more entries
        cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
        cin >> choice;
        // Clears input buffer
        cin.ignore();

        // Breaks the loop if user enters 0
        if (!choice){
            break;
        }
    } while(1);

    // Printing out of information entered

    cout << "\nMOVIE DETAILS\n\n";
    // Calling the getTitle(), getSynopsis(), and getRating() method from class Movie
    cout << "Movie title: " << movie1.getTitle() << "\n\n";
    cout << "Synopsis: " << movie1.getSynopsis() << "\n\n";
    cout << "MPAA Rating: " << movie1.getRating() << "\n\n";

    cout << "Genre(s):\n";
    // Creates a list data type to store the list that is returned by the getGenre() method
    list<string> genres = movie1.getGenre();
    // For loop to print out the elements in the list
    for (string g : genres){
        cout << g << "\n";
    }
    
    cout << "\nDirector(s): \n";
    // Creates a list data type to store the list that is returned by the getDirectors() method
    list<Person> direct = movie1.getDirectors();
    // For loop to print out the elements in the list
    for(Person d : direct ){
        cout << d.getName() << "\n";
    }

    // Creates a list data type to store the list that is returned by the getActors() method
    cout << "\nActor(s)\Actress(es): \n";
    list<Person> act = movie1.getActors();
    // For loop to print out the elements in the list
    for(Person a : act){
        cout << a.getName() << "\n";
    }

    return 0;
}