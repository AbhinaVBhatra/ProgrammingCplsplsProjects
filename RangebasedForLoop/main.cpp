// Section 9
// Range based FOR LOOP

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int scores [] {10,20,30};
      for (int score:scores){
          cout << score << endl;
      }
 cout << "\n=============================" << endl;
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

// Setting an initializer list in the loop header itself !
 
 cout << "===============================" << endl;
 cout << "\nDisplaying First 5 Integers: " << endl;
 
   for ( auto val : {1,2,3,4,5} ) {
       cout << val << " " ;
   }      
   
 cout << "\n----------------------------------------" << endl;
   
   for (auto c: "This is a test") { 
     if (c != ' ')  
       cout << c ;
   } 
 cout << endl;   
    
   for (auto c: "This is a test") { 
     if (c == ' ')  
       cout << "\t" ;
     else 
       cout << c;  
   } 
// cout << "Default Template" << endl;
    return 0;
}