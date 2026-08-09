#include <iostream>
using namespace std ;
int main ()
{
 cout << "hello " << endl; 

   int favourite_number {} ;
   const int val1 {100} ;
   const int val2 {999} ;
   
 cout << "Enter your favourite number between " << val1 << " and " << val2 << " : " ;
   cin >> favourite_number ;

if ( favourite_number >=100 && favourite_number < 1000) {
 cout << "Your favourite number between " << val1 << " and " << val2 << " is " << favourite_number << " ." << endl;
 
   int dig_100s_plc {} ;
    dig_100s_plc = favourite_number / val1 ;

 cout << "Hundreds place : " << dig_100s_plc << endl;
   
   int balance {} ;
    balance = favourite_number % val1 ;
    
   int dig_10s_plc {} ;
   const int val3 {10} ;
    dig_10s_plc = balance / val3 ;
   
 cout << "Tens place : " << dig_10s_plc << endl;

   int dig_1s_plc {} ;
    dig_1s_plc = balance % val3 ;
    
 cout << "Ones place : " << dig_1s_plc << endl;

   int sum_of_cubes {};
    sum_of_cubes = ((dig_100s_plc*dig_100s_plc*dig_100s_plc)+(dig_10s_plc*dig_10s_plc*dig_10s_plc)+(dig_1s_plc*dig_1s_plc*dig_1s_plc)) ;    
    
if ( sum_of_cubes == favourite_number ) {
    
 cout << "Your favourite number(" << favourite_number << ") is an armstrong number " << endl;    
}else {
 cout << "The number is not an armstrong number" << endl;   
}
}else{
 cout << "Error! Entered number is not between " << val1 << " and " << val2 << " ." << endl;   
}   

  cout << "\n==============================" << endl;  
// cout << "Default Template" << endl;
    
 cout << "List of Armstrong numbers between 1 to 999:" << endl; 

  for ( int num{1} ; num<=999 ; num++) { 
       int hundsplc {num/100};
       int tnsplc {(num%100)/10};
       int onsplc {num%10};
       int armsnum = ((hundsplc*hundsplc*hundsplc)+(tnsplc*tnsplc*tnsplc)+(onsplc*onsplc*onsplc)); 
 
    if ( num == armsnum ){
        cout << num << endl;
    }
  }
 cout << "\n=================================" << endl; 

  int n{};
   cout << "Propose a number!" ;
     cin >> n ;
  int r{1};   
    for(int i{1};i<=n;i++){
        for(int j{1};j<=i;j++){
            for(int k{1};k<=n-r;k++){
                cout << " " ;
            }
               for(int l{1};l<=2*(i)-1;l++){
                   cout << "*" ;
               }
               cout << endl;
        }
          r++;
    } 
  cout << "\n=================================" << endl; 

  int numm{};
   cout << "Propose a number!" ;
     cin >> numm ;
 int rr{1}; 
 int ss{numm+1};
    for(int ii{1};ii<=2*(numm)-1;ii++){
        if(ii<=numm){
            if(ii==1){
                for(int jj{1};jj<=numm-rr;jj++){
                    cout << " " ;
                }
                 cout << "*" << endl;
            }else{
                for(int kk{1};kk<=numm-rr;kk++){
                    cout << " " ;
                }
                 cout << "*" ;
                   for(int ll{1};ll<=2*(rr-1)-1;ll++){
                       cout << " " ;
                   }
                    cout << "*" << endl;
            }
              rr++;
        }else{
            if(ii>numm && ii<2*(numm)-1){
                for(int m{1};m<=ss-numm;m++){
                    cout << " " ;
                }
                 cout << "*" ;
                   for(int mm{1};mm<=4*(numm)-2*(ss)-3;mm++){
                       cout << " " ;
                   }
                    cout << "*" << endl;
            }else{
                for(int o{1};o<=ss-numm;o++){
                    cout << " " ;
                }
                 cout << "*" << endl;
            }
              ss++;
        }
    } 
 cout << "===========================" << endl;   
 int t{};   
  cout << "Enter a number: " ;
    cin >> t ;  
    
   for(int a{1}; a<=t ;a++){
       for(int b{2*(t-a)}; b>=1; b--){
           cout << " " ;
       }
        for(int c{a}; c>1; c--){
            cout << c << " " ;
        }
         for(int e{1}; e<=a; e++){
             cout << e << " " ;
         }
          for(int d{2*(t-a)}; d>=1; d--){
             cout << " " ;
          }
            cout << endl;
   }
   
 return 0 ;
}