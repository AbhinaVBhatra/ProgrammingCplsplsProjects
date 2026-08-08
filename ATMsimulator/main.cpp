#include <iostream>

using namespace std;

int main(){
  int choice ;  
   int balance{10000}; 
   int amt ;  
   int N{0}, trans[10], i{0} ; 
  // int dpst_cnt {0}, wtdl_cnt {0} ;
   // bool flag {false} ; 
   int pin[4] ; 
 cout << "Enter the pin(seperated by spaces): " ;
  bool pinval{false}; 
    do{
      for(int p=0;p<4;p++){
        cin >> pin[p] ;
       if(pin[p]>9 || pin[p]<1){
        cout << "ERROR$$" << endl;
         cin >> pin[p] ; 
       }
      }
       int p{3}, q{0} ;
        while(p>=0){
         q += pin[p] ;
          p--;    
        }
          if(q==20){
            pinval = true ;  
           }else{
             cout << "Wrong Pin!! TRY AGAIN..." << endl; 
          }   
    }while (pinval==false);
      cout << "ACCESS AVAILED!" << endl;   
   do{
     cout << "\n---MENU---" ;
      cout << "\n1. Check Balance" ;
      cout << "\n2. Deposit Money" ;
      cout << "\n3. Withdraw Money" ;
      cout << "\n4. Mini Statement Analyzer" ;
      cout << "\n5. Exit" ;
        cout << "\nChoose an Option: " ;
          cin >> choice ;
         cout << "*************\n" ;
        switch(choice){
            case 1: 
               cout << "Current Balance: " << balance << endl;
              break; 
            case 2:
               cout << "Enter the Amount: " ;
                 cin >> amt ;
                if(amt <=0){
                   cout << "Invalid Amount!" << endl ;
                 }else{
                    balance += amt ;
                   cout << "Updated Balance: " << balance << endl;
                     N++;  
                      trans[i] = amt ;             //deposit-money
                       i++;
                }
              break; 
            case 3:
               cout << "Enter the Amount: " ;
                 cin >> amt ;
                if(amt <=0){
                   cout << "Invalid Amount!" << endl ;
                 }else{
                   if(amt>balance){
                      cout << "Insufficient Balance! " << endl;  
                    }else if(amt%100 != 0){
                     cout << "Enter Amount in multiples of 100. " << endl;
                     }else{
                       balance-=amt;
                      cout << "Updated Balance: " << balance << endl;
                        N++;
                         trans[i] = -amt ;           //withdraw-money 
                          i++;            
                   }
                }   
              break; 
            case 4:
            {                    /*
                                   C++ does not allow jumping over initialization of 
                                   variables with constructors or initial values, 
                                   because it can lead to undefined behavior.  
                                 */
             int dpst_cnt {0}, wtdl_cnt {0} ;
              bool flag {false} ;   
               cout << "Total Number of Transactions: " << N << endl;
                cout << "The Transaction Amounts are: "  ;
                 if(N==0){
                   cout << "---NA---" ; 
                  }else{
                     cout << endl; 
                    for(int j=0;j<i;j++){
                       if(trans[j]>0){
                           cout << trans[j] << "  -> Deposit." << endl;
                            dpst_cnt++;
                        }else if(trans[j]<0){
                            cout << trans[j] << " -> Withdrawal." << endl;
                             wtdl_cnt++;
                       }
                    }  
                      int maxdpst, maxwtdl ;
                       maxdpst = trans[0] ;
                       maxwtdl = trans[0] ;
                        for(int k=1;k<i;k++){
                          if(trans[k]>maxdpst){
                            maxdpst = trans[k];
                          }
                            if(trans[k]<maxwtdl){
                               maxwtdl = trans[k];  
                            }   
                        }
                          for(int l=0;l<i;l++){
                            if(trans[l]>5000 || trans[l]<-5000){
                                flag = true ; 
                            }
                          }  
                             cout << "\n######" << endl;
                              cout << "\nDeposits: " << dpst_cnt ;
                              cout << "\nWithdrawals: " << wtdl_cnt ; 
                              cout << "\nLargest Deposit: " << maxdpst ;     
                              cout << "\nLargest Withdrawal: " << maxwtdl ;       
                                if(flag==true){
                                  cout << "\nSuspicious Activity Detected!" << endl ; 
                                } 
                 } 
            }       
              break;
            case 5:
               cout << "THANKS FOR VISITING..." << endl;
              break;
             default:
                 cout << "Choose an Option from (1-5)!!" << endl;  
        } 
   } while (choice!=5);
 //cout << "Default Template" << endl;
    return 0;
}