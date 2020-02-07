/* Write a single C++ statement or line that accomplishes each of the following: */
//Done by Wilson Neira
#include <iostream>

using namespace std;
void addbc();
void payroll();
// Print the message "Enter two numbers".
int main() {
    cout << "Enter two numbers" << endl;
    addbc();
    payroll();

    return 0;
}


//Assign the product of variables b and c to variable a.
void addbc()
{
    //Declaring variable b and c.
    int b,c;
    //Prompt user to input b.
    cout << "Type integer b" << endl ;
    cin >> b;
    //Prompt user to input c..
    cout << "Type integer c" << endl ;
    cin >> c;
    //Add b and c and output the result a;
    int a = b + c;
    cout << "b + c = " << a << endl;

};

/* State that a program performs a payroll calculation (i.e., use text that helps to document
a program) */

// Input three integer values from the keyboard into integer variables a, b and c.
void payroll()
{
    cout << "This Program will perform a payroll calculation." << endl ;
    //Declare the variables a, b, and c.
    int a,b,c;
    //Prompt user to input b.
    cout << "Type integer a:" << endl ;
    cin >> a;
    //Prompt user to input b.
    cout << "Type integer b:" << endl ;
    cin >> b;
    //Prompt user to input c.
    cout << "Type integer c:" << endl ;
    cin >> c;

    //Program calculates the product of three integers.
    //Declare the variables x, y, and z to calculate the payroll.
    int x = 0;
    int y = 0;
    int z = 0;
    //Prompt user to input x.
    cout << "Type integer x:" << endl ;
    cin >> x;
    //Prompt user to input y.
    cout << "Type integer y:" << endl ;
    cin >> y;
    //Prompt user to input z.
    cout << "Type integer z:" << endl ;
    cin >> z;
    //Get the product of x, y, and z to output the result of the payroll program.
    int result = x * y * z;
    cout << "The product is " << result << endl;



}


/* Write a statement (or comment) to accomplish each of the following (assume that using
declarations have been used for cin, cout and endl):
a) Document that a program calculates the product of three integers.
b) Declare the variables x, y, z and result to be of type int (in separate statements) and
initialize each to 0.
c) Prompt the user to enter three integers.
d) Read three integers from the keyboard and store them in the variables x, y and z.
e) Compute the product of the three integers contained in variables x, y and z, and assign
the result to the variable result.
f) Print "The product is " followed by the value of the variable result.
g) Return a value from main indicating that the program terminated successfully.
*/

/* Using the statements you wrote above, write a complete program that calculates
and displays the product of three integers. Add comments to the code where appropriate.
[Note:You’ll need to write the necessary using declarations or directive.] */

