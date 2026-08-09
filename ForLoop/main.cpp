#include <iostream>
#include <vector>
using namespace std;

int main()
{
// NO initialization, NO testing, NO increament   
/************
 * 
 * 
   for ( ; ; )
        cout << "Endless loop" << endl;
 *
 * 
 ***********/
// cout << "\nList of ODD INTEGERS between less than 10: " << endl;
//    for ( int i{1} ; i<=10 ; i+=2 )      //This time the increament is done by 2!
//      cout << i << endl;                 //Using the compound assignment operator. 
//       
// cout << "\nTABLE OF TEN: " << endl;
//    for ( int i{10} ; i<110 ; i+=10 ) {
//      cout << i << endl;  
//    }
//    

//    for (int i{1} ; i<=100 ; i++) {
//        cout << i ;
//     if ( i%10==0 ) 
//      cout << "\n" ;
//     else 
//      cout << " " ;     
//    } 

  vector <int> nums {10,20,30,40,50};
    for (unsigned int i{0} ; i<nums.size() ; ++i)   // nums.size always produce unsigned value!!
      cout << nums[i] << endl; 
    cout << "\n" ;
 
  int sum {0};
//
    cout << "\nThe sequence of Odd Integers less than 17: " ;
    
    for (int i{1}; i<=15; i++){
      if ( i%2==1 ) {
        cout << i ;
        cout << ((i<15) ? "," : " " );     // Use of Conditional operator
      sum += i ;                           // Use of compound assignment operator
      }  
   }    
 /* Sum variable is inside the for loop's body,
 hence it also manipulates after each iteartion*/

//      for (int i{1}; i<=15; i+=2){
//        cout << i ;
//        cout << ((i<15) ? "," : " " );
//      sum +=i ;
//      } 
        cout << "\nThe sum of the above sequence: " << sum << endl;
        
 cout << "\nCalculating the average temperature of a city(JAIPUR):" << endl;

 vector<double>temps {87.2,77.1,80.0,72.5};
 
 cout << "Temp at Day1: " << temps.at(0) << endl;
 cout << "Temp at Day2: " << temps.at(1) << endl;
 cout << "Temp at Day3: " << temps.at(2) << endl;
 cout << "Temp at Day4: " << temps.at(3) << endl;
    
     double avg_temp {};
     double running_sum {};
   for ( auto temp : temps ) {
       running_sum += temp ;
   }      
     avg_temp = running_sum/temps.size() ;
   cout << "The average temperature is: " << avg_temp << endl;  
return 0;
}