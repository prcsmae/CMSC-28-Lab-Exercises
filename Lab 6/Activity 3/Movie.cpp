#include "Movie.h"

Movie::Movie(string title, string synopsis, string rating) {
  this->title = title;
  this->synopsis = synopsis;
  this->rating = rating;
}

void Movie::addDirector(const Person &director) {
  directors.push_back(director);
}

void Movie::addActor(const Person &actor) { actors.push_back(actor); }

void Movie::addGenre(const string &g) { genre.push_back(g); }

const list<Person> &Movie::getDirectors() const { return directors; }

const list<Person> &Movie::getActors() const { return actors; }

const string &Movie::getTitle() const { return title; }

const string &Movie::getSynopsis() const { return synopsis; }

const string &Movie::getRating() const { return rating; }

const list<string> &Movie::getGenre() const { return genre; }
