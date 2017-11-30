/** Decimal / Binary Numbering Systems Conversion
 *  Computer Programming
 *  C00187998
 *  Gerard Murphy
 *  02/10/17
 */
#include <iostream>/**< preprocessor directives */
#include <math.h>

using namespace std;

int bin_2_dec(long int);/**< function prototypes */
int dec_2_bin(long int);

int main()/**< main() function */
{
    cout << "Decimal / Binary Numbering Systems Conversion" << endl;/**< Title */

    char Input;/**< variable declaration */
    int n;

    do/**< do while loop containing switch case */
    {
        cout<<  "\n\nChoose from the following:"<<
                "\n'b' binary number to its decimal value"<<
                "\n'd' decimal number to its unsigned binary value"<<
                "\n'q' to quit program";
        cin>>Input;

        switch(Input)/**< switches between different operators */
        {
            case 'b':
                        cout<<"Enter binary value"<<endl;
                        cin>>n;
                        int bin_2_dec(long int n);/**< call bin_2_dec function and display result below */
                        cout<<" \nThe binary number "<< n <<" is "<< bin_2_dec(n) <<" in decimal ";
                        break;

            case 'd':
                        cout<<"Enter decimal value"<<endl;
                        cin>>n;
                        int dec_2_bin(long int n);/**< call dec_2_bin function and display result below */
                        cout<<" \nThe decimal number "<< n <<" is "<< dec_2_bin(n) <<" in binary ";
                        break;

            case 'q':
                        cout<<"quitting"<<endl;
                        break;

            default:
                        cout<<"Please try again"<<endl;
                        break;
        }
    }

    while (Input!='q');

    return 0;
}

int bin_2_dec(long int n)/**< bin_2_dec function */

{
    int Decimal=0, i=0, remainder;/**< variable declaration */

    while (n!=0)

    {
        remainder =n%10;/**< performing calculation */
        n=n/10;
        Decimal=Decimal + remainder*pow(2,i);
        i++;
    }

    return Decimal;
}

int dec_2_bin (long int n)/**< dec_2_bin function */

{
    long long Binary=0;
    int remainder, i=1;

    while (n!=0)

    {
        remainder=n%2;/**< performing calculation */
        n=n/2;
        Binary =Binary + (remainder*i);
        i = i * 10;
    }

    return Binary;

}




