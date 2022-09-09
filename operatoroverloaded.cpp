/* This program implements the basic class for complex numbers and demonstrates +
operator function */

#include <iostream>
using namespace std;
class Complex
{
private:
double m_real ; // Real Part
double m_imag ; // Imaginary Part

public:
/* Parameterless Constructor */
Complex()
{
    cout<< "\n Parameterless Constructor called ..." ;
}
/* Parameterized Constructor */
Complex(double r, double i)
{
    cout<< "\n Parameterized Constructor called ...";
    m_real = r;
    m_imag = i;
}
/* Setter of real data member */
void setRealpart(double r)
{
    m_real = r;
}
/* Getter of the real data member */
double getRealpart()
{
    return m_real ;
}
/* Setter of the imag data member */
void setImag(double i)
{
    m_imag = i ;
}
/* Getter of the imag data member */
double getImag ()
{
return m_imag ;
}
/* A Function to display parts of a Complex object */
void display()
{
cout << "\n Displaying parts of complex number ...";
cout << "\n Real Part : " << m_real<<endl;
cout << " Imaginary Part : " << m_imag << endl;
}
/* Declaration (prototype) of overloaded sum operator */
Complex operator+ (Complex &c2);
};
Complex Complex::operator+(Complex &c1)
{
cout << "\n Operator + called ...";
Complex temp;
temp.m_real = m_real + c1.m_real;
temp.m_imag = m_imag + c1.m_imag;
return temp;
}
int main()
{
Complex c1(1,2); // Consturct an object using the parameterized constructor
Complex c2(2,3); // Consturct another object using the parameterized
// constructor
Complex result; // Construct an object using a parameterless constructor
result = c1 + c2 ; // Call the Operator + to add two complex numbers (c1 & c2)
// and then assign the result to 'result' object
result.display(); // Display the result object contents
}





