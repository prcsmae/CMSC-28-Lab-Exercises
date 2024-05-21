#include "Movie.h" // Include path to Movie.h
#include <iostream>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::list;
using std::string;

int main() {
  cout << "\nThis program will create a directory of information about a movie "
          "using user input.\n";
  cout << "\nProgrammed by: Precious Mae E. Jomuad\n";

  string title, synopsis, rating, genre;

  cout << "\nEnter movie title: ";
  getline(cin, title);

  cout << "\nEnter synopsis: ";
  getline(cin, synopsis);

  cout << "\nEnter MPAA Rating: ";
  getline(cin, rating);

  Movie movie1(title, synopsis, rating);

  // Declaration of variable choice to be used in the do-while loops below
  int choice;

  do {
    cout << "\nWhat is/are the genre(s): ";
    getline(cin, genre);
    movie1.addGenre(genre);

    cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
    cin >> choice;
    // Clears input buffer
    cin.ignore();

  } while (choice);

  // Use a placeholder Person object to collect input
  Person person;
  string fn, ln, gender;

  cout << "\nWho is/are the director(s): \n";
  do {
    cout << "\nEnter first name: ";
    getline(cin, fn);
    person.setFName(fn);

    cout << "\nEnter last name: ";
    getline(cin, ln);
    person.setLName(ln);

    cout << "\nEnter gender: ";
    getline(cin, gender);
    person.setGender(gender);

    movie1.addDirector(person);

    cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
    cin >> choice;
    cin.ignore();

  } while (choice);

  cout << "\nWho is/are the actor(s)/actress(es): \n";
  do {
    cout << "\nEnter first name: ";
    getline(cin, fn);
    person.setFName(fn);

    cout << "\nEnter last name: ";
    getline(cin, ln);
    person.setLName(ln);

    cout << "\nEnter gender: ";
    getline(cin, gender);
    person.setGender(gender);

    movie1.addActor(person);

    cout << "\nAre there any more?\n[1] Yes\n[0] No\nChoice: ";
    cin >> choice;
    cin.ignore();

  } while (choice);

  // Printing out of information entered

  cout << "\nMOVIE DETAILS\n\n";
  cout << "Movie title: " << movie1.getTitle() << "\n\n";
  cout << "Synopsis: " << movie1.getSynopsis() << "\n\n";
  cout << "MPAA Rating: " << movie1.getRating() << "\n\n";

  cout << "Genre(s):\n";
  list<string> genres = movie1.getGenre();
  for (string g : genres) {
    cout << g << "\n";
  }

  cout << "\nDirector(s): \n";
  list<Person> direct = movie1.getDirectors();
  for (Person d : direct) {
    cout << d.getName() << "\n";
  }

  cout << "\nActor(s)/Actress(es): \n";
  list<Person> act = movie1.getActors();
  for (Person a : act) {
    cout << a.getName() << "\n";
  }

  return 0;
}
