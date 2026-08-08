#include <iostream>

using namespace std;

int main(){
  int N; 
cout << "---SMART NUMBER ANALYZER---" ; 
  cout << "\nEnter a number: " ;
   cin >> N ;
  int fact_count ; 
  int prime_counter{0} ; 
  int not_prime_counter{0} ; 
    for(int r=1;r<=N;r++){
      fact_count = 1 ;
       if(r%3==0 && r%5!=0){
          cout << r << "-> Fizz.\n" ;
        }else if(r%5==0 && r%3!=0){
            cout << r << "-> Buzz.\n" ;
        }else if(r%3==0 && r%5==0){
            cout << r << "-> FizzBuzz.\n" ;
        }else{ 
           for(int s=2;s<=r;s++){            
              if(r%s==0){
                fact_count++;
              }
           }
             if(fact_count==2){
               cout << r << "-> Prime.\n" ; 
                 prime_counter++; 
              }else{
                  cout << r << "-> Not-Prime.\n" ; 
                    not_prime_counter++;
             }
       }   
    }
      cout  << "\n--------------------------" ;
        cout << "\nPrime = " << prime_counter  ;
        cout << "\nNot-Prime = " << not_prime_counter  ;
   return 0;
}