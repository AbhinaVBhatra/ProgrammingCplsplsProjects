// Section 9
// Conditional Operator

#include <iostream>

using namespace std;

int main()
{
    int num {};
    
 cout << "Enter an Integer: " ;
   cin >> num ;

 if (num % 2 == 0)
 cout << num << " is an Even Integer." << endl;
 else 
 cout << num << " is an Odd Integer." << endl;

 cout << endl;
 cout << "===============" << endl;

// Using the CONDITIONAL OPERATOR !!!
  
 cout << "\nEntered Integer is :";
 cout << ((num % 2 == 0) ? "Even":"Odd") ;
 
 cout << "\n\n==============================" << endl;
 
 cout << "-----COMPARING TWO INTEGERS ENTERED BY THE USER-----" << endl;
 
    int num1{},num2{} ;
 
 cout << "Enter the First Integer: ";
   cin >> num1 ;
 cout << "Enter the Second Integer: ";
   cin >> num2 ;

 if ( num1 != num2 ){
 cout << "Larger Integer: " << ((num1 > num2) ? num1 : num2) << endl;
 cout << "Smaller Integer: " << ((num1 < num2) ? num1 : num2)  << endl;    
 }
 else 
 cout << "Entered Integers are same!" << endl;
    
// cout << "Default Template" << endl;
    return 0;
}