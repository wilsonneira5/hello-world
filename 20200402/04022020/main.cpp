//Done by Wilson Neira
#include <iostream>
using namespace std;

int main() {
    //1. Write C++ statements to accomplish each of the following:

    //a) Display the value of element 6 of character array alphabet.
    char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout<<alphabet[5]<<endl;

    //b) Input a value into element 4 of one-dimensional floating-point arraygrades.
    float arraygrades[] = {99.9, 99.98,99.97,99.96,99.99};
    cout<<"Type in a grade:";
    cin>>arraygrades[4];

    //c) Initialize each of the 5 elements of one-dimensional integer array values to 8.
    int values[] = {8,8,8,8,8};
    for(int i = 0; i < 5; i++)
    {
        values[i] = 8;
    }

    //d) Total and display the elements of floating-point array temperatures of 100 elements.
    float temperatures[100];
    for(int i = 0; i < 100; i++)
    {
        temperatures[i] = 1;
    }

    double sum = 0;

    for(int i = 0; i < 100; i++)
    {

        sum += temperatures[i];
    }

    cout<<"The total is: "<<sum<<endl;

    //e) Copy array a into the first portion of array b. Assume that both arrays contain doubles and that arrays a and b have 11 and 34 elements, respectively.
    double a[11];
    for(int i = 0; i < 11; i++)
    {
        a[i] = 1;
    }

    double b[34];
    for(int i = 0; i < 34; i++)
    {
        b[i] = 2;
    }

    for(int i = 0; i < 11; i++)
    {
        b[i] = a[i];
    }

    //f) Determine and display the smallest and largest values contained in 99-element floating-point array w.
    double w[99];
    for(int i = 0; i < 50; i++)
    {
        w[i] = 1;
    }
    for(int i = 50; i < 99; i++)
    {
        w[i] = 2;
    }

    double small = w[0];
    double large = w[0];

    for(int i = 0; i < 99; i++)

    {

        if(w[i] < small)
        {

            small = w[i];
        }

        if(w[i] > large)
        {

            large = w[i];
        }

    }

    cout<<"Smallest element: "<<small<<endl<<"Largest element: "<<large<<endl;


    //2. (Two-Dimensional array Questions) Consider a 2-by-3 integer array t.

    //a) Write a declaration for t.
    double t[2][3];

    //b) How many rows does t have?
    cout<<"It has 2 rows."<<endl;

    //c) How many columns does t have?
    cout<<"It has 3 columns."<<endl;

    //d) How many elements does t have?
    cout<<"It has 6 elements."<<endl;

    //e) Write the names of all the elements in row 1 of t.
    cout<<t[0][0]<<t[0][1]<<t[0][2]<<endl;

    //f) Write the names of all the elements in column 2 of t.
    cout<<t[1][0]<<t[1][1]<<endl;

    //g) Write a statement that sets the element of t in the first row and second column to zero.
    t[0][1]=0;

    //h) Write a series of statements that initialize each element of t to zero. Do not use a loop.
    t[0][0]=0, t[0][1]=0, t[0][2]=0;
    t[1][0]=0, t[1][1]=0, t[1][2]=0;

    //i) Write a nested counter-controlled for statement that initializes each element of t to zero.
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
            t[i][j]=0;
    }

    //j) Write a nested range-based for statement that initializes each element of t to zero.
    for(int i : {0,1}){
        for(int j : {0,1,2}){
            t[i][j] = 0;
        }
    }

    return 0;
}
