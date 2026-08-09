//CHALLENGE
/*
  This challenge is about using a collection(list) of integers and allowing the user
  to select options from a menu to perform operations on the list.

  Your Program should display a menu options to the user as follows:

 * P - Print Numbers
 * A - Add a Number
 * M - Display mean of the Numbers
 * S - Display the Smallest Number
 * L - Display the largest Number
 * Q - Quit

   Enter your choice:
    
The program should only accept valid choices from the user, both Upper and Lowercase Selections should be allowed.
If an illegeal choice is made, you should display, "Unknown Selection, Please try again!" and the menu options should be 
displayed again    


If the user enters 'P' or 'p', you should display all of the elements (ints) of the list.
If the list is empty, you should display "[] - The list is Empty."
If the list is not empty, then all the list elements should be displayed inside the square brackets seperated by space.
For Example, [1 2 3 4 5]


If the user enters 'A' or 'a', you should prompt the user for an integer to add the list
which you will add to the list and then display it was added. 
For Example, if the user enters 5, you should display, "5 Added."
Duplicate list entries are OK, OR can be changed later.          


If the user enters 'M' or 'm', you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - NO DATA."


If the user enters 'S' or 's', you should display the smallest element in the list.
For Example, if the list contains [2 4 5 1], you should display, "The Smallest Number is 1."
If the list is empty you should display, "Unable to determine the Smallest Number - LIST IS EMPTY."  
  
  
If the user enters 'L' or 'l', you should display the largest element in the list.
For Example, if the list contains [2 4 5 1], you should display, "The Largest Number is 5."
If the list is empty you should display, "Unable to determine the LARGEST Number - LIST IS EMPTY."  

  
If the user enters 'Q' or 'q', then you should display "GOODBYE" and the program should terminate. 
  

Use a Vector(List size can be Dynamic)

Additional Functionality, if you wish to extend the program---
 
- search for a number in the list and if found display the number of times it occurs in the list.
- clearing out the list(make it empty again)     
- don't allow duplicate entries.
- come up with your own ideas.   

*/     
#include <iostream>
#include <vector>

using namespace std;

int main(){
 char choice;
 int add, del ;
   //unsigned lst_count{0} ;
  bool flag{false};
  vector<int>integer_list{2,4,5,1} ;
    do{
     cout << "\n-----------------------\n" << endl;
      cout << "P/p - Print Numbers " << endl;
      cout << "A/a - Add a Number " << endl;
      cout << "F/f - Add five Numbers at once(seperated by spaces): " << endl;       
      cout << "M/m - Display Mean of the Numbers " << endl;
      cout << "S/s - Display the Smallest Number " << endl;
      cout << "L/l - Display the Largest Number " << endl;
      cout << "D/d - Delete a Number " << endl;
      cout << "Q/q - Quit " << endl;
      
       cout << "\nEnter a Choice: " ;
         cin >> choice ; 
        if(choice=='Q' || choice=='q'){
           flag = true ;  
        } 
          //cout << endl; 
       // cout << "---#$%^@^%$#---" << endl;
         switch(choice){
            case 'P':
            case 'p':
               if(integer_list.size()==0){           /* integer_list.size() returns the number of elements currently in the vector.
                                                         The return type is size_t (an unsigned integer type)  
                                                       sizeof(v)   // WRONG   ->  This gives the size of the vector object in memory, not the number of elements. */
                  cout << "[] - The List is Empty." ;
                }else{
                    cout << "[ " ;
                   for(size_t i=0;i<integer_list.size();i++){     // Unsigned int could also be used, instead of size_t
                     cout << integer_list.at(i) << " " ; 
                         
                      /* 
                        if((i+1)%4==0){
                          cout << "]" << endl;
                           cout << "[ " ; 
                        }
                      */  
                   }
                     cout << "]" << endl;
               }
             break;  
            case 'A':
            case 'a':
              cout << "Enter Integer to add in the list: " ;
                cin >> add;
              // Duplicate Entry restricted from now-on.  
                {
                  unsigned Q{0} ;
                    while(Q<integer_list.size()){
                        if(integer_list.at(Q)==add){
                           do{
                                // While Loop could have also been used here, as the condition is priorly true. 
                              cout << "Duplicate suspected! Enter different Integer: " ;
                                cin >> add ;
                           } while(integer_list.at(Q)==add) ;
                               Q = 0 ; 
                         }else{   // What we just did is that... we controlled the increament of Q!  
                            Q++;             /*
                                                 *The trick Q = -1...WORKS!! 
                                             ->Q = -1 wraps around the variable and assigns 4294967295... which is the largest possible positive arithmetic, an unsigned int can store.
                                                 Q = -1 → becomes 4294967295
                                                 Q++ → wraps again: 4294967295 + 1 → 0
                                                   So you’re using wraparound to reset Q back to 0.
                                             */ 
                        }     
                    }       
                }     // 2,4,5,1 ki list mei agar 1 ko duplicate batane ke baad agar 4 daal de toh voh list mei add ho jaa rha h, iska solution dhundho!
                        /*
                          Iska solution aise samjha jaa skta h ki, list mei indexing sirf aage ke traf hi badh rhi h, 
                           koi ek duplicate aa jane ke baad... usse shuru se(yaani ki wapis zeroth index se) check krna chaiye!  
                        */ 
                    integer_list.push_back(add) ;
                 cout << add << " is added in list. " << endl; 
            /*
              cout << "Enter Integer to add in the list_" << lst_count << ": " ;
                cin >> add ;
                   integer_list.push_back(add) ;
                 cout << add << " is added in list_" << lst_count << ". " << endl;  
               if(integer_list.size()==4*(lst_count)){
                    lst_count++ ;
               }
             */ 
             break; 
            case 'F':
            case 'f':
              cout << "Enter the Integers to add in list: " ;
                for(int k=1;k<=5;k++){
                     cin >> add ;
                    integer_list.push_back(add) ; 
                }
                  cout << "Integers added in the list. " << endl;
             break; 
               // Here also, Duplication is restricted!
            case 'M':
            case 'm':
             float mean;   
                if(integer_list.size()==0){
                  cout << "Unable to calculate the mean - NO DATA." << endl;  
                 }else{
                   float sum{0} ;  
                    for(unsigned int j=0;j<integer_list.size();j++){
                       sum += integer_list.at(j) ; 
                    } 
                     mean = sum/integer_list.size() ;
                      cout << "The Mean of the Numbers is: " << mean << endl;  
                }
             break;
            case 'S':
            case 's': 
               if(integer_list.size()==0){
                  cout << "Unable to determine the Smallest Number - LIST IS EMPTY." << endl;  
                 }else{
                    int smlstnum ; 
                      smlstnum = integer_list.at(0) ;
                       for(size_t s=0;s<integer_list.size();s++){
                           if(integer_list.at(s)<smlstnum){
                               smlstnum = integer_list.at(s) ;
                           }
                       }
                         cout << "The Smallest Number is " << smlstnum << ". " << endl;
                 }
             break;
            case 'L':
            case 'l':
               if(integer_list.size()==0){
                  cout << "Unable to determine the Largest Number - LIST IS EMPTY." << endl;  
                 }else{
                    int lrgstnum ;
                      lrgstnum = integer_list.at(0) ;
                       for(unsigned int l=0;l<integer_list.size();l++){
                           if(integer_list.at(l)>lrgstnum){
                               lrgstnum = integer_list.at(l) ;
                           }
                       }
                         cout << "The Largest Number is " << lrgstnum << ". " << endl;  
                 }
             break;
            case 'D':
            case 'd':
              cout << "Enter Integer to delete from the list: " ;
                cin >> del ;
                  for(size_t a=0;a<integer_list.size();a++){
                    if(integer_list.at(a)==del){
                       for(unsigned b=a;b<integer_list.size();b++){
                          if(b==integer_list.size()-1){
                              integer_list.pop_back() ;     // OR integer_list.resize(integer_list.size() - 1);
                           }else{ 
                               integer_list.at(b) = integer_list.at(b+1) ;
                          }
                       }
                         cout << del << " is deleted from the list. " << endl; 
                    }
                  }
             break;  
            case 'Q':
            case 'q': 
              cout << "GOODBYE..." << endl;
             break; 
                default: 
                  cout << "Unknown Selection, Please try again!" << endl;   
         }     
  } while(flag==false);  

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
    
// cout << "Default Template" << endl;
    return 0;
}