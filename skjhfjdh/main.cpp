// Section 9
// Use of if statement
/*****************************
 * 
 * if statement actually allows the user to choose between two different actions,
   wheather to perfrom which one based on the condition true / false ...
 * 
 * 
 *****************************/ 

#include <iostream>      // IDEs rule for Preprocessor highlights even after commenting the whole code 

using namespace std;

int main()
{
    
    int age {} ;
  
 cout << "Enter the age: " ;
   cin >> age ;
 
    const int legal_age_to_drive {18} ;
    
 if ( age >= legal_age_to_drive ) 
 cout << "Yes - you can drive! " << endl;
 else 
 {
     int diff {} ;
     diff = legal_age_to_drive - age ;
     cout << "Sorry,come back in " << diff << " year(s) " << endl;
 }
  
 cout << "THANKS..." ;  
//   cout << "Default Template" << endl;
    return 0;
}