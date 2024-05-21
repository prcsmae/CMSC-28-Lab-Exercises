#ifndef MOVIE
#define MOVIE

#include "Person.h"
#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;

/**
 * @class Movie
 * @brief Represents a movie with directors, actors, title, synopsis, rating,
 * and genre.
 *
 * It contains a list of directors, a list of actors, a title, a synopsis, a
 * rating, and a list of genres.
 *
 * It provides methods to add directors, add
 * actors, add genres, and retrieve information about the movie.
 */
class Movie {
  string title, synopsis, rating;
  list<Person> directors, actors;
  list<string> genre;

public:
  /**
   * @brief Create a movie using title, synopsis, and rating.
   *
   * @param title The title of the movie.
   * @param synopsis The synopsis of the movie.
   * @param rating The rating of the movie.
   * @return A Movie with the given title, synopsis, and rating.
   */
  Movie(string title, string synopsis, string rating);

  /**
   * @brief Adds a director to the movie.
   * @param director The director to be added.
   */
  void addDirector(const Person &director);

  /**
   * @brief Adds an actor to the movie.
   * @param actor The actor to be added.
   */
  void addActor(const Person &actor);

  /**
   * @brief Adds a genre to the movie.
   * @param g The genre to be added.
   */
  void addGenre(const string &g);

  /**
   * @brief Retrieves the list of directors of the movie.
   * @return The list of directors.
   */
  const list<Person> &getDirectors() const;

  /**
   * @brief Retrieves the list of actors of the movie.
   * @return The list of actors.
   */
  const list<Person> &getActors() const;

  /**
   * @brief Retrieves the title of the movie.
   * @return The title of the movie.
   */
  const string &getTitle() const;

  /**
   * @brief Retrieves the synopsis of the movie.
   * @return The synopsis of the movie.
   */
  const string &getSynopsis() const;

  /**
   * @brief Retrieves the rating of the movie.
   * @return The rating of the movie.
   */
  const string &getRating() const;

  /**
   * @brief Retrieves the list of genres of the movie.
   * @return The list of genres.
   */
  const list<string> &getGenre() const;
};

#endif
