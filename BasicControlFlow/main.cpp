#include <iostream>

using namespace std;

int main()
{
    char choice{};
    int balance{1000};
    int amount{};
    
  do{
 cout << "=====ATM Menu=====" << endl;
    cout << "B/b - Check Balance " << endl;  
    cout << "D/d - Deposit " << endl;
    cout << "W/w - Withdrawal " << endl;
    cout << "Q/q - QUIT " << endl;
   cout << "Enter your choice: " ; 
     cin >> choice ;
    switch(choice){
       case 'B':
       case 'b':
          cout << "Bank(Account) Balance(in $):" << balance << endl;
         break;
       case 'D':
       case 'd':
          cout << "Enter the Amount(in $) you want to deposit: " ;
            cin >> amount ;
         cout << "------------------" << endl;
               balance+=amount;   
         cout << "---RENEWED Bank(account) balance(in $):" << balance << endl;   
         break;
       case 'W':
       case 'w':
          cout << "Enter the Amount(in $) you want to withdraw: " ;
            cin >> amount ;
              if(amount<=balance){
                cout << "Transaction(Withdrawal) possible!" << endl;
                 cout << "------------------" << endl;
               balance-=amount;  
                 cout << "---RENEWED Bank(account) balance(in $):" << balance << endl;  
              }else{
                 do{ 
                cout << "***Insufficient balance!TRY AGAIN***" << endl;
                     cout << "Enter the Amount(in $) you want to withdraw: " ;
                       cin >> amount ; 
                 }while(amount>=balance);
                balance-=amount; 
                   cout << "---RENEWED Bank(account) balance(in $):" << balance << endl;
              } 
         break;
       case 'Q':
       case 'q':
          cout << "THANKS For Your Visit!Have a GOOD DAY " << endl;
         break;
        default:
           cout << "Unknown entry...Please, TRY AGAIN!!" << endl;     
       }  
  }while(choice!='Q' && choice!='q');
  
 cout << "\n--------------------" << endl;
  cout << "A Different Pattern: " << endl; 
int v{1};
int u{};
 for(int i{1};i<=5;i++){
     for(int l{1};l<=i;l++){
         for(int j{u};j<4;j++){
             cout << " " ;
        }
           for(int k{v};k<=(i+i)-1;k++){
               cout << "*" ;
        } 
           cout << endl;
    }   
       u++;
 }    
 cout << "\n--------------------" << endl;
  cout << "An Approximate Butterfly---" << endl; 
  int t{};
 cout << "Enter the wing stretch length of the butterfly: ";
   cin >> t; 
   for(int m{1};m<=(t+t)-1;m++){
      if(m<=t){
       for(int n{1};n<=m;n++){
           cout << "*" ;
       }
           for(int p{1};p<=(t+t)-(m+m);p++){
               cout << " " ;
           }
               for(int q{1};q<=m;q++){
                   cout << "*" ;
               }
        cout << endl;
    }else{
       for(int o{m};o<t+t;o++){
           cout << "*" ;
       } 
           for(int r{1};r<=(m+m)-(t+t);r++){
               cout << " " ;
           }
               for(int s{m};s<t+t;s++){
                   cout << "*" ;
               }
        cout << endl;
    }
}
// cout << "Default Template" << endl;
cout <<"============================" << endl;  
   int num_select{};
    cout << "Enter the num selection, you need for pattern flow: " ;
      cin >> num_select ;
      
   for(int rd{1};rd<=num_select;rd++){
     for(int gr{rd};gr<=num_select;gr++){
        cout << gr << ((gr==num_select) ? "\n":" ");
     }
   }
   for(int rd{num_select-1};rd>=1;rd--){
     for(int gr{rd};gr<=num_select;gr++){
         cout << gr << ((gr==num_select) ? "\n":" ");
     }
   }
// cout << "Default Template" << endl;
 cout << "============================" << endl;  
  cout << "Numeric Hourglass(Palindrome style)--- " << endl;
  
   int pln_num{};
  cout << "Enter the number! " ;
    cin >> pln_num ;
    cout << "-------------" << endl; 
 int bb{pln_num};
 int cc{};
 int dd{1};
  for(int a{1};a<=2*(pln_num)-1;a++){
      if(a<=pln_num){
          for(int b{bb};b<=pln_num-1;b++){
              cout << " " ;
          }
            bb--;
             for(int c{1};c<=(pln_num-cc);c++){
                 cout << c ;
             }
                for(int f(pln_num-cc-1);f>=1;f--){
                    cout << f ;
               }
                 cc++;
               cout << endl;  
      }else{
          for(int d{pln_num+dd};d<2*(pln_num)-1;d++){
              cout << " " ;
          }
             for(int e{1};e<=dd+1;e++){
                 cout << e ;
             }
                for(int g{dd};g>=1;g--){
                    cout << g ;
                }
                  dd++;
                cout << endl; 
      }
      
  } 
  cout << "============================" << endl;  
  cout << "A Hollow Diamond--- " << endl;
   int nn{};
     cout << "Enter side-length(diagonal-wise) of the kite/diamond: " ;
       cin >> nn ;
 int abc{2};      
   for(int ab{1};ab<=2*(nn)-1;ab++){
       if(ab<=nn){
           switch(ab){
               case 1:
                 for(int aba{1};aba<=nn-1;aba++){
                    cout << " " ;
                 }
                 cout << "*" << endl; 
                  break;
               default:
                 for(int abb{1};abb<=nn-abc;abb++){
                     cout << " " ;
                 } 
                 cout << "*";   
                    for(int bc{1};bc<=2*(abc-1)-1;bc++){
                        cout << " " ;
                    }
                    cout << "*" << endl;
                      abc++;
    }
       }else{
          if (ab==2*(nn)-1){
            for(int bab{1};bab<=nn-1;bab++){
                cout << " " ;
            }
            cout << "*" << endl;
        }else{
            for(int baa{1};baa<=ab-nn;baa++){
                cout << " " ;
            } 
            cout << "*";
               for(int cb{1};cb<=2*(2*(nn)-ab-1)-1;cb++){
                   cout << " " ;
               }
               cout << "*" << endl;
           }
        
        }
  }  
    return 0;
}