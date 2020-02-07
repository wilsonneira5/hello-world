//
// Created by wilson.neira on 2/6/2020.
//
// Exercise 2.5
// Calculate the product of three integers
#include <iostream> // enables program perform input and output
using namespace std; // program uses name from std namespace

//function main begins program execution
int main() {

    int x{0}; // first integer to multiply
    int y{0}; // second integer to multiply
    int z{0}; // third integer to multiply
    int result{0}; // the product of three integers

    cout << "Enter three integers: "; // prompt user for data
    cin >> x >> y >> z; // read three integers from user
    result = x * y * z; // multiply the three integers; storage result
    cout << "The product is " << result << endl; // print result; end line

    // Exercise 2.16
    double a,b;
    cout << "Enter two numbers:" << endl ;
    cin >> a >> b;
    double sum = a + b;
    double product = a * b;
    double difference = a - b;
    double quotient = a / b;
    cout << "a + b = " << sum << "\n"
    << "a * b = " << product << "\n"
    << "a - b = " << difference << "\n"
    << "a / b = " << quotient << "\n"<< endl ;

    // Exercise 2.17
    cout << "1 2 3 4 ";
    cout << "1 " << "2 " << "3 " << "4 ";
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4 ";

    // Exercise 2.18
    int f,s;
    cout << "\nEnter two integers:" << endl ;
    cin >> f >> s;
    if (f > s)
    {
        cout << f << " is larger." << endl ;
    }
    else if (s > f)
    {
        cout << s << " is larger." << endl ;
    }
    else
    {
        cout << "These numbers are equal." << endl ;
    }

    // Exercise 2.19
    int w,i,n;
    cout << "Input three different integers: ";
    cin >> w >> i >> n;
    int sum2 = w + i + n;
    int average = sum2 / 3;
    int product2 = w * i * n;
    int smallest;
    int largest;
    if (w < i && w < n)
    {
        smallest = w;
    }
    else if (i < w && i < n)
    {
        smallest = i;
    }
    else if (n < w && n < i)
    {
        smallest = n;
    }
    if (w > i && w > n)
    {
        largest = w;
    }
    else if (i > w && i > n)
    {
        largest = i;
    }
    else if (n > w && n > i)
    {
        largest = n;
    }
    cout << "Sum is " << sum2 <<endl ;
    cout << "Average is " << average <<endl ;
    cout << "Product is " << product2 <<endl ;
    cout << "Smallest is " << smallest <<endl ;
    cout << "Largest is " << largest <<endl ;

    // Exercise 2.20
    int radius;
    cout << "Input the radius of a circle as an integer: ";
    cin >> radius;
    int diameter = 2 * radius;
    cout << "2 * " << radius << " = " << diameter << endl;
    cout << "The diameter is " << diameter << endl;
    int circumference = 2 * 3.14159 * radius;
    cout << "2 * 3.14159 * " << radius << " = " << circumference << endl;
    cout << "The circumference is " << circumference << endl;
    int area = 3.14159 * (radius * radius);
    cout << "3.14159 * " << radius * radius << " = " << area << endl;
    cout << "The area is " << area << endl;

    // Exercise 2.21
    cout << "*********         ***           *               *" << endl ;
    cout << "*       *       *     *        ***             * *" << endl ;
    cout << "*       *      *       *      *****           *   *" << endl ;
    cout << "*       *      *       *        *            *     *" << endl ;
    cout << "*       *      *       *        *           *       *" << endl ;
    cout << "*       *      *       *        *            *     *" << endl ;
    cout << "*       *      *       *        *             *   *" << endl ;
    cout << "*       *       *     *         *              * *" << endl ;
    cout << "*********         ***           *               *" << endl ;



} // end function main

