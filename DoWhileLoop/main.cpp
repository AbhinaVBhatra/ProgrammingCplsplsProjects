#include <iostream>

using namespace std;

int main()
{
/*     
// Here, if the number is out of range, we loo again using the Do-While Loop!    
    int num{};
     do {
       cout << "Enter an Integer between 1 and 5: ";
         cin >> num ;
     } while(num<=1 || num>=5);  
  cout << "THANKS!" << endl;
  
  cout << "\n-----AREA CALCULATION-----" << endl;
   char selection {};
     do {
       double width{},height{},area{};
        cout << "Enter the width and height seperated by space: " ;
          cin >> width >> height;
        area = width*height ;
        cout << "The area is " << area << endl;
        cout << "Calculate another(Y/N): ";
          cin >> selection ; 
    }  while(selection=='Y' || selection=='y');
    cout << "THANKS!" << endl; 
**********************
 * 
 * 
 The statememts prior to the while keyword and thereafter, are executed at least once 
  in the program...this assures the unconditional operation(execution of the loop) 
   in the Do-While Loop!
 *
 *
***********************
*/
 cout << "\nAPPLICATION DEVELOPMENT" << endl;
  char choice {};  
   do{
     cout << "----------------------" << endl;
     cout << "1. Do This " << endl; 
     cout << "2. Do That " << endl; 
     cout << "3. Do Something Else " << endl; 
     cout << "Q. QUIT " << endl; 
   cout << "\nEnter your choice: ";
     cin >>  choice ;
    
     if(choice=='1'){
       cout <<"You chose 1 - Doing This!" << endl;  
     }else if(choice=='2'){
       cout <<"You chose 2 - Doing That!" << endl;  
     }else if(choice=='3'){
       cout <<"You chose 3 - Doing Something Else!" << endl;  
     }else if(choice=='Q' || choice=='q'){
       cout << "GoodBye..." << endl;    
     }else{
       cout << "Unknown Option - TRY AGAIN..." << endl;  
     } 
    } while(choice!='Q' && choice!='q');
/*Use of Logical-and operator is significant here....    
  jb tk 'Q' aur 'q'...ye dono nhi honge! tb tk loop body chalti rhegi*/
    return 0;
}    