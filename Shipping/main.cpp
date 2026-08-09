// Section 9
// Shipping

#include <iostream>

using namespace std;

int main()
{
 cout << "-----WELCOME TO THE PACAKAGE DELIEVERY SERVICES(CUSTOMS)----- " << endl;
 cout << "\nEnter the dimensions of the pacakges as directed : " << endl;
   
   int length {} ;
   int width {} ;
   int height {} ;

 cout << "Length in inches : " ;
   cin >> length ;
   
 cout << "Width in inches : " ;
   cin >> width ;

 cout << "Height in inches : " ;
   cin >> height ;  
   
 if (length <= 10 && width <= 10 && height <= 10 )
 {
 cout << "======Ready for Shipment======" << endl;
 cout << "The charges of shipping are as follows: " << endl;
 
   const double base_cost {2.50} ;
   int volume {} ;
   volume = length*width*height ;
   double price {} ;
   
  if ( volume > 100 && volume < 500 ){
 
   price = ((volume*base_cost) + (volume*0.1)) ;   
 cout << "Charges are (+10% surcharge) : $" << price << endl;    
  }
  else if ( volume >= 500 ){
   
   price = ((volume*base_cost) + (volume*0.25)) ;
 cout << "Charges are (+25% surcharge) : $" << price << endl;   
  }
  else {      
 // else cannot have any condition attached to it, only if and else-if can !
 // else simply means all other cases not caught above.
 
   price = (volume*base_cost) ;
 cout << "Charges are : $" << price << endl;   
 }
 }  
 else {
 cout << "Failed for shipping, fill the dimensions of the package as directed. " << endl; 
 }

return 0;
}