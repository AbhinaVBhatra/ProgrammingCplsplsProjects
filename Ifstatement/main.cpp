// Section 9
// If Statement

#include <iostream>

using namespace std;

int main()
{
      int num {0} ;
      
     const int min {10} ;
     const int max {100} ;
  
 cout << "Enter an integer between " << min << " and " << max << " : " ;
   cin >> num ;

 if ( num >= min ) {
     
 cout << "\n============ If Statement 1 ============" << endl;
 cout << num << " is greater than(or equal to) " << min << endl;

   int diff {} ;
   diff = num - min ;
 cout << num << " is " << diff << " place(s) ahead of " << min << " on the number line " << endl; 
 }  
// This is where the block statements are used

 if ( num <= max ) {
     
 cout << "\n============ If Statement 2 ============" << endl;
 cout << max << " is less than(or equal to) " << num << endl;

    int diff {} ;
    diff = max - num ;
 cout << num << " is " << diff << " place(s) behind of " << max << " on the number line " << endl;     
 }
 
 if ( num >= min && num <= max ) {
     
 cout << "\n============ If Statement 3 ============" << endl;
 cout << num << " is within the bounds. " << endl;
 cout << "This means that statements 1 and 2 are also displayed. " << endl;
  }
 
if ( num == min || num == max ) {
 
 cout << "\n============ If Statement 4 ============" << endl;   
 cout << num << " is right on the boundry. " << endl;
 cout << "This means that all the above statements are displayed and holds true. " << endl;
   
}

 cout << "\n-------------" << endl;
 cout << "THANKS" << endl;
 cout << "-------------" << endl;

//  cout << "Default Template" << endl;

    return 0;
}