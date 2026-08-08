#include <iostream>

using namespace std;

 int fact(int a){
      int A;
       A = a ; 
        for(int k=1;k<a;k++){
            A = A*(a-k) ;
        }
     return A;
 }
int main(){
    int n;
     cout << "Enter the Array-size(1-100): " ;
      cin >> n ;
       int arr[n];
     cout << "Enter the Array elements(1-1000): " ;  
        for(int i=0;i<n;i++){
            cin >> arr[i] ;
        } 
          int count;
           count = 0 ;
            for(int j=0;j<n;j++){
                if(arr[j]%2==0){
                   count++;
                }
            }
              cout << "Even: " << count ;
              cout << "\nOdd: " << n-count ;
  cout << "\n--------------------" ;            
     int m;                
       cout << "\nEnter an integer: " ;
        cin >> m ;
      long int M;
        M = fact(m) ;       
         cout << "Factorial of " << m << " is: " << M << "." << endl;
          cout << m << "! = " << M ;
  cout << "\n--------------------" ;
      int rgtr,fvhund,hund,fty,tn,ons;
     cout << "\nEnter the amount: " ;
       cin >> rgtr ;
    cout << "Khulle: " ;
      fvhund=rgtr/500;
     cout << "\n500 ke - " << fvhund ;
      hund=(rgtr-fvhund*500)/100;
     cout << "\n100 ke - " << hund ;
      fty=(rgtr-(fvhund*500)-(hund*100))/50;
     cout << "\n50 ke - " << fty ;    
       tn=(rgtr-(fvhund*500)-(hund*100)-(fty*50))/10;
     cout << "\n10 ke - " << tn ;
       ons=(rgtr-(fvhund*500)-(hund*100)-(fty*50)-(tn*10))/1;
     cout << "\n1 ke - " << ons ;
             
    return 0;
}