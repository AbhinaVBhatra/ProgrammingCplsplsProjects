#include <iostream>

using namespace std;

int main()
{ 
    cout << "\nAPPLICATION DEVELOPMENT" << endl;
  char selection {};  
   do{
     cout << "----------------------" << endl;
     cout << "1. Do This " << endl; 
     cout << "2. Do That " << endl; 
     cout << "3. Do Something Else " << endl; 
     cout << "Q. QUIT " << endl; 
   cout << "\nEnter your selection: ";
     cin >> selection ;
    
     if(selection=='1'){
       cout <<"You chose 1 - Doing This!" << endl;  
     }else if(selection=='2'){
       cout <<"You chose 2 - Doing That!" << endl;  
     }else if(selection=='3'){
       cout <<"You chose 3 - Doing Something Else!" << endl;  
     }else if(selection=='Q' || selection=='q'){
       cout << "GoodBye..." << endl;   
     }else{
       cout << "Unknown Option - TRY AGAIN..." << endl;
     }  
    } while(selection!='Q' && selection!='q');  
/*Use of Logical-and operator is significant here....    
  jb tk 'Q' aur 'q'...ye dono nhi honge! tb tk loop body chalti rhegi*/
    return 0;
}