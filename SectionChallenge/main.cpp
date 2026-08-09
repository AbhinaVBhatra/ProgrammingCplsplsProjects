// Section 9
// ***Section Challenge***
/*
  This challenge is about using a collection(list) of integers and allowing the user 
  to select options from a menu to perform operations on the list.

  Your program should display a menu options to the user as follows:

  P - Print numbers
  A - Add a number
  M - Display mean of the numbers
  S - Display the smallest number   
  L - Display the largest number
  Q - Quit

  Enter your choice:

The program should only accept valid choices from the user,both upper and lowercase selections should be allowed.
If an illegal choice is made,you should display,"Unknown selection, please try again" and the menu options should be 
displayed again.


If the user enters 'P' or 'p', you should display all the elements(ints) in the list.
If the list is empty, you should display "[] - The list is empty."
If the list is not empty then all the list element should be displayed inside square brackets seperated by a space.
 For Example, [1 2 3 4 5]
  
If the user enters 'A' or 'a', then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added.For example, if the user enters 5
You should display, "5 added".

If the user enters 'M' or 'm', you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display,"Unable to calculate the mean - no data"

If the user enters 'S' or 's', you should display the smallest element in the list.
 For Example, if the list contains [2 4 5 1], you should display,"The smallest number is 1"
If the list is empty you should display,"Unable to determine the smallest number - the list is empty"

If the user enters 'L' or 'l' you should display the largest element is the list.
 For Example, if the list contains [2 4 5 1], you should display,"The largest number is 5"
If the list is empty you should display,"Unable to determine the largest number - the list is empty"
 
If the user enters 'Q' or 'q', you should display "Goodbye" and the program should terminate.

*/

 #include <iostream>
 #include <vector>
 using namespace std;

int main()
{  
    char choice{};
     vector<int>vec{10,-10,100,500,3};
    int n{}; 
    int sum{};
    double mean{};
    int smlst{},lrgst{};
  do{
    cout << "\n" ;
     cout << " P/p - Print numbers " << endl;
     cout << " A/a - Add a number " << endl;
     cout << " M/m - Display the mean of the numbers " << endl;
     cout << " S/s - Display the smallest number " << endl;
     cout << " L/l - Display the largest number " << endl;
     cout << " Q/q - QUIT " << endl;
   cout << "-----------------------" << endl;  
 cout << "Enter your choice: ";
   cin >> choice ;
    switch(choice){
      case 'P':
      case 'p':
        if(vec.empty()){
          cout << "[] - The list is empty." << endl;
        }else{
          cout << "[";    
            for(unsigned int i{};i<vec.size();i++){
               cout << vec.at(i) << ((i==(vec.size()-1)) ? "]":" ");
            }    
          cout << endl ; 
        }
     break;
      case 'A':
      case 'a':
        cout << "Enter the number which you want to add-on to the list:";
          cin >> n ;
//            for(unsigned int i{};i<vec.size();i++){
//              do{
//                 for(unsigned int i{};i<vec.size();i++){
//                   if(n==vec.at(i)){
//                     cout << "\n**NO duplicate entries allowed..." << endl; 
//                     cout << "Enter the number which you want to add-on to the list:";
//                       cin >> n ;
//                   } 
//                 } 
//               }while(n==vec.at(i));
//            
//            }
              bool duplicate{};
               duplicate=false;
                do{
                  for(unsigned int i{};i<vec.size();i++){
                      if(n==vec.at(i)){
                        cout << "\n**NO duplicate entries allowed..." << endl; 
                        cout << "Enter the number which you want to add-on to the list:";
                          cin >> n ;
                      }else{
                           vec.push_back(n);
                        cout << "'" << n << " added' " << endl;  
                         duplicate=true;
                      }
                  }
                }while(duplicate==false);
//              bool duplicate;  
//                do {
//                  duplicate=false;      // Assumes no duplicates
//                 for (unsigned int i{};i<vec.size();i++) {      // 🔎 checks every element
//                    if (n==vec.at(i)) {
//                      cout << "\n**NO duplicate entries allowed..." << endl;
//                      cout << "Enter the number which you want to add-on to the list: ";
//                        cin >> n;
//                       duplicate=true;       // raise the flag
//                      break;                 // stop loop, restart checking 
//                     }
//                  }
//                 }while(duplicate);   // repeat if duplicate was found
/*************************
*Suppose vec = [10, 20, 30], and user tries to add 20.
*Loop runs:
  * Compare n=20 with 10 → not equal.
  * Compare n=20 with 20 → duplicate found!
  * Ask again for n. Say user enters 25.
  * Because duplicate = true, loop repeats.

Now check again:
*Compare 25 with 10, 20, 30 → no matches.
*duplicate stays false → loop ends.
✅ Now 25 is confirmed unique.
**************************/ 
//            vec.push_back(n);
//        cout << "'" << n << " added' " << endl;  
     break;
      case 'M':
      case 'm':
        if(vec.empty()){
          cout << "Unable to calculate the mean - NO DATA! " << endl;
        }else{
             sum = 0; //👈 Reset sum every time before loop
 /***** Sum should be local to the calculation, not stored and reused across iterations.*****/            
            for(unsigned int i{};i<vec.size();i++){
                sum+=vec.at(i);
            }
            mean=static_cast<double>(sum)/vec.size();
          cout << "Mean of all the listed numbers is " << mean << "." << endl; 
        }
     break;
      case 'S':
      case 's':
        if(vec.empty()){
          cout << "Unable to determine the smallest number - The list is empty." << endl;   
        }else{
            smlst=vec.at(0);   // start with the first element
              for(unsigned int i{1};i<vec.size();i++){
                if(vec.at(i)<smlst){
                    smlst=vec.at(i);   // update whenever we find the smaller number
                }
              }
              cout << "The smallest number is " << smlst << "." << endl;
        }
     break;
      case 'L':
      case 'l':
        if(vec.empty()){
          cout << "Unable to determine the largest number - The list is empty." << endl;  
        }else{
            lrgst=vec.at(0);   // start with the first element
              for(unsigned int i{1};i<vec.size();i++){
                if(vec.at(i)>lrgst){
                    lrgst=vec.at(i);    // update whenever we find the largest number
                } 
              }
              cout << "The largest number is " << lrgst << "." << endl; 
        }
     break;
      case 'Q':
      case 'q':
        cout << "GoodBye..." << endl;
     break; 
        default:
          cout << "Unknown selection...please,TRY AGAIN!!" << endl; 
    }
  }while(choice!='Q' && choice!='q');
       
// cout << "Default Template" << endl;
    return 0;
}