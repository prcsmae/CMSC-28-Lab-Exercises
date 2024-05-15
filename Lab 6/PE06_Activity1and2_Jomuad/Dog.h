#include <iostream>
#include <string>
using std::string;
using std::cout;

class Dog{
   string name;
   string breed;
   int age;

   public:
        Dog(const string& dogName, const string& dogBreed, const int& dogAge){
            name = dogName;
            breed = dogBreed;
            age = dogAge;
        } 

        void dogInfo(){
            cout << "The dog's name is: " << name << ". \nThey are " << age << " year(s) old. \n";
            cout << "They are a " << breed << ". \n";
        }
};