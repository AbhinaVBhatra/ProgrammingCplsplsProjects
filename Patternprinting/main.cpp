#include <iostream>

using namespace std;

int main()
{
    
   cout << "\nList of numbers which are of the form 13n+1 for all n belongs to natural" << endl;
 cout << "(the list only counts integers between 1 to 100)" << endl;
   
   for ( int nat{1} ; nat <= 100 ; nat++ ){
       if ( nat % 13 == 1 ){
           cout << nat << endl;
       } 
   } 
// Using the COMMA operator    
 /*  for ( int i{5},j{9} ; j>=5 ; --i,--j ) {
       cout <<"\n"<< i << " * " << j << " : " << (i*j) << endl;
   }  
*/  
   for ( int i{5},j{5} ; j<=9 ; --i,++j ) {
       cout <<"\n"<< i << " * " << j << " : " << (i*j) << endl;
   }
 /*  
   for ( int i{1},j{9} ; j>=5 ; ++i,--j ) {
       cout <<"\n"<< i << " * " << j << " : " << (i*j) << endl;
   }
   
   for ( int i{1},j{5} ; i<=5 ; ++i,++j ) {
       cout <<"\n"<< i << " * " << j << " : " << (i*j) << endl;
   }
    */ 
return 0;
}