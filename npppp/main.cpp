#include <iostream>
#include <vector>
using namespace std;

int main()
{
/*    
 cout <<"============================" << endl;  
   int num_choice{};
    cout << "Enter the num selection, you need for pattern flow: " ;
      cin >> num_choice ;
      
   for(int rd{1};rd<=num_choice;rd++){
     for(int gr{rd};gr<=num_choice;gr++){
        cout << gr << ((gr==num_choice) ? "\n":" ");
     }
   }
   for(int rd{num_choice-1};rd>=1;rd--){
     for(int gr{rd};gr<=num_choice;gr++){
         cout << gr << ((gr==num_choice) ? "\n":" ");
     }
   }
    */
      vector<int>data_items{};
   int num_of_items{};
   cout << "Enter the number of items, you want to put data in: " ;
     cin >> num_of_items ;   
     
    int data_item{};    // Well, it's actually not a concern of putting the variable(data_item) 
                        // inside the loop or not!
                        // As each new input, overwrites the previous one****** 
     for(int i{};i<num_of_items;i++){
        cout << "Entry in data item " << (i+1) << ": " ;
          cin >> data_item ; 
     }   
       data_items.push_back(data_item);       
       
      cout << "\nDisplaying the data item(s) list: " ;
       cout << "\n[ ";
      int i{};
    while(i<num_of_items){
        cout << data_items.at(i) ;
          if(i!=num_of_items){
             cout << " " ; 
          }  
        i++;
    }
       cout << "]" << endl;
/*****************************
 Case 1: data_item declared outside the loop
  int data_item{};  
    for (int i{}; i < num_of_items; i++) {
     cout << "Entry in data item " << (i+1) << ": ";
       cin >> data_item; 
    }


*data_item exists for the entire function (until main() ends).
*Each new input overwrites the previous one.
*Only the last entered value remains stored after the loop
 (unless you push them into a container like vector).

 Case 2: data_item declared inside the loop
    for (int i{}; i < num_of_items; i++) {
      int data_item{};   // created fresh on every iteration
        cout << "Entry in data item " << (i+1) << ": ";
          cin >> data_item; 
    }


*data_item is created new for each iteration and destroyed when that iteration ends.
*Still, only the last iteration’s value survives if you print/store it immediately 
 (otherwise it’s lost).
*This version makes the variable’s scope smaller (limited only to loop body), 
 which is generally cleaner. 

********************************/ 
 // cout << "Default Template" << endl;
    return 0;
}