#include <iostream>

using namespace std;

int main()
{
  // In the Below code-snippet, 'i' is not increamented...
  // This leads to endless console prints of 'i' initialised to a particular value!  
/*
   int i{1};
    while (i<6){
      cout << i;
    }
*/
  double i{0.00};
    while (i<=0.30){
        i+=0.02;              // Until-Unless 'i' isn't increamented or changed, the loop's keep 
        cout << i << endl;    // gonna repeating that particular value endless times!
    }                           

 cout << "EVEN NUMBERS: " << endl;
  int j{1};
   cout << "{" ;  
    while (j<=10){
      //  cout << ((j%2==0) ? 'j' :" ");   
       if (j%2==0){
          cout << j << ((j<10) ? ",":"}") ; 
       } 
        ++j;
    }
 cout << "\n=============================" << endl;
   
   int num {};
 cout << "\nEnter a positive integer: " ;
   cin >> num ; 
 cout << "\nStart The CountDOWN!! " << endl;

     while(num>0){
       cout << num << endl;
        --num;   
     }
 cout << "BlastOFF!" << endl;  

  int posint{} ;
 cout << "\nEnter a Positive Integer of your choice: " ;
   cin >> posint ;
 cout << "{" ;
 
     for(int i{1}; i<=posint;i++){
        cout << i << ((i<posint) ? ",":"}" ); 
     }
 cout << endl;    
 cout << "The above depiction is the formulation of numbers(positive integers) up to your choice!" << endl;
  
 cout << "=============================" << endl;
// Use of while loop !! (INPUT VALIDATION)
 cout << "HERE,INPUT VALIDATION IS SHOWN: " << endl;
  int number{};
 cout << "\nEnter an Integer less than 100: " ;
   cin >> number ;
   
    while(number>=100)              // !(number<100)
{
      cout << "Enter an Integer less than 100: " ;
        cin >> number ;
  }
   cout << "Thanks!" << endl;
   
  bool done {};
  int numnum{0};
  
   while (done==false){
      cout << "Enter an Integer between 1 and 5: " ;
        cin >> numnum ;
       
     if (numnum<=1 || numnum>=5){
        cout << "Out of Range, TRY AGAIN! " << endl; 
     }else{
        cout << "THANKS!" << endl; 
      done = true ;
     }
   }
    
   bool tskcomp{};
   int intgr{0};

    while (tskcomp==0){
       cout << "Enter an Integer between 1 and 10: " ;
         cin >> intgr ; 
      if(intgr<=1 || intgr>=10){
       cout << "Out of Range - TRY AGAIN!!" << endl;
     }else{
       cout << "THANKS!" << endl;
         tskcomp=1;   // yaani ki agar ek baar if-else mei uljha, toh pehle vhi interpret(compile) hoga!!
      }  
       // tskcomp=1;
 /*************************
  * Setting the end iteration(tskcomp=1) at here, will just end the while loop 
  with never again repeating, whatever the input is previously submitted! 
  *************************/ 
    }  
//  cout << "Default Template" << endl;
return 0;
}