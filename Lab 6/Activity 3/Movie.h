#include <iostream>
#include <string>
#include <list>
#include "Person.h"

using std::string;
using std::list;

/**
 * @class Movie
 * @brief Represents a movie.
 * 
 * The Movie class is a derived class of the Person class and represents a movie. It contains information about the movie's directors, actors, title, synopsis, rating, and genre.
 */
/**
 * @class Movie
 * @brief Represents a movie with directors, actors, title, synopsis, rating, and genre.
 * 
 * The Movie class is a derived class of the Person class. It contains a list of directors,
 * a list of actors, a title, a synopsis, a rating, and a list of genres. It provides methods
 * to add directors, add actors, set the title, set the synopsis, set the rating, add genres,
 * and retrieve information about the movie.
 */
class Movie: private Person{
    list<Person> directors;
    list<Person> actors;
    string title;
    string synopsis;
    string rating;
    list<string> genre;
public:
    Movie() : Person() {}

    /**
     * @brief Adds a director to the movie.
     * @param director The director to be added.
     */
    void addDirector(const Person& director){
        directors.push_back(director);
    }
    
    /**
     * @brief Adds an actor to the movie.
     * @param actor The actor to be added.
     */
    void addActor(const Person& actor){
        actors.push_back(actor);
    }

    /**
     * @brief Sets the title of the movie.
     * @param t The title of the movie.
     */
    void setTitle(const string& t){
        title = t;
    }

    /**
     * @brief Sets the synopsis of the movie.
     * @param text The synopsis of the movie.
     */
    void setSynopsis(const string& text){
        synopsis = text;
    } 

    /**
     * @brief Sets the rating of the movie.
     * @param rate The rating of the movie.
     */
    void setRating(const string& rate){
        rating = rate;
    }

    /**
     * @brief Adds a genre to the movie.
     * @param g The genre to be added.
     */
    void addGenre(const string& g){
        genre.push_back(g);
    }

    /**
     * @brief Retrieves the list of directors of the movie.
     * @return The list of directors.
     */
    const list<Person>& getDirectors() const{
        return directors;
    }

    /**
     * @brief Retrieves the list of actors of the movie.
     * @return The list of actors.
     */
    const list<Person>& getActors() const{
        return actors;
    }

    /**
     * @brief Retrieves the title of the movie.
     * @return The title of the movie.
     */
    const string& getTitle() const{
        return title;
    }

    /**
     * @brief Retrieves the synopsis of the movie.
     * @return The synopsis of the movie.
     */
    const string& getSynopsis() const{
        return synopsis;
    }

    /**
     * @brief Retrieves the rating of the movie.
     * @return The rating of the movie.
     */
    const string& getRating() const{
        return rating;
    }

    /**
     * @brief Retrieves the list of genres of the movie.
     * @return The list of genres.
     */
    const list<string>& getGenre() const{
        return genre;
    }
};