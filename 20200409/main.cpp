#include <iostream>

int main()
{

    return 0;
}

/*Find the error(s) in each of the following and explain how to correct it (them):*/
/*1a) Assume the following prototype is declared in class Time:
        void ~Time(int);*/
/*1a) 2 errors

error: return type specification for destructor invalid

error: destructors may not have parameters

correction : remove int return type and parameter type

~Time();*/


/*1b) Assume the following prototype is declared in class Employee:
       int Employee(string, string);*/
/*1b) 1 error

error: return type specification for constructor invalid

correction : Employee(string,string)*/


/*1c - Two errors in this one) The following is a definition of class Example:
class Example {
public:
    Example(int y = 10) : data(y) { }
    int getIncrementedData() const {
        return ++data;
    }
    static int getCount() {
        cout << "Data is " << data << endl;
        return count;
    }
private:
    int data;
    static int count;
};*/

/*1c)

Example(int y = 10) : data(y){} error in this line

error: only constructors take member initializers

Correction: Example() { y = 10; }

Error: the Second error occurs in function getCount. This function is declared static, so it's not allowed to access any non-static member.

Correction: Remove the output line form the getCount definition.
        int getCount() {
        cout << "Data is " << data << endl;
        return count;
         }*/


/*2. What’s the purpose of the scope resolution operator?*/
/*2.

Scope resolution operator is used to define a function outside the class declaration.

Example:

class Student{

private:

    string name;

    double grade;

public:

    Student(string name,double grade); // constructor

};

Student::Student(string name,double grade) // scope resolution is used to define the function after declaration using class

// name

{

    this-> name = name;

    this->grade = grade;

}*/


/*3. Explain the notion of friendship. Explain the negative aspects of friendship as described in the text.*/
/*3. Friendship

        Friend function can access the private and protected members of the class in which it is declared as friend.

Friend class can access the private and protected members of the class in which it is declared as friend.

Its limitations are :

Friend functions cannot be inherited
        Friend functions do not have storage class specifiers.*/



/*4. Can a Time class definition that includes both of the following constructors, be used to default construct a Time object? If not, explain why.

Time(int h = 0, int m = 0, int s = 0);
Time();*/

/*4.

There will be error if constructor or destructor is defined with return type even void.

error: return type specification for destructor invalid

error: return type specification for constructor invalid*/


/*5.  What happens when a return type, even void, is specified for a constructor or destructor?*/
/*5.

There will be error if constructor or destructor is defined with return type even void.

error: return type specification for destructor invalid

error: return type specification for constructor invalid*/