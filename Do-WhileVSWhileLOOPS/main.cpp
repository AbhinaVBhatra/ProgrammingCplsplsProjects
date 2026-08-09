#include <iostream>

using namespace std;

int main()
{
    char choice{}; 
  while(choice!='Q' && choice!='q'){
      cout << "Enter your choice: " ;
        cin >> choice ;
  }
  
  cout << "-----------------------" << endl;
    do{
        cout << "Enter your choice: " ;
        cin >> choice ;
    }while(choice!='Q' && choice!='q');
    
// cout << "Default Template" << endl;
    return 0;
}