#include <iostream>
#include<vector>

using namespace std;

int main(){
/*   
  int N; 
  cout << "Enter a number: " ;
   cin >> N ;
  int factor_count; 
    for(int r=1;r<=N;r++){
      factor_count = 1;
        for(int s=2;s<=r;s++){
          if(r%s==0){
            factor_count++;
          }
        }
         if(factor_count==2){
           cout << r << "-> Prime.\n" ; 
          }else{
            cout << r << "-> Not-Prime.\n" ; 
         }   
    }
   cout << "----------------------\n" ; 
    cout << "T(n) = [4.{(3)^n-1} - n] \n" ;
     //cout << "n = " << N ;
     int k{3};
      cout << "\n3" ;
       for(int i=1;i<=N;i++){
          k = 3*(k) + 2*(i) - 1 ;
           cout << "," << k ;  
       }
        cout << "\n" ; 
//cout << "Default Template" << endl;

  // Infinite-Loop! 
 int P;
    for(P=0;P<=5;P++){
       cout << "*" ;
        P = 0 ; 
    }
*/

  vector<int>integer_list{2,4,5,1} ;
   int add ;
     cout << "Enter Integer to add in the list: " ;
                cin >> add;
              // Duplicate Entry restricted from now-on.  
                {
                  unsigned Q = integer_list.size() - 1 ;
                  unsigned P{0};
                    while(Q>=0){
                        if(integer_list.at(Q)==add){
                           do{
                                // While Loop could have also been used here, as the condition is priorly true. 
                              cout << "Duplicate suspected! Enter different Integer: " ;
                                cin >> add ;
                           } while(integer_list.at(Q)==add) ;
                               Q = integer_list.size() ; 
                                    // We did not let Q to ever attain a number less than zero(0). 
                                    // If it ever were to fetch that possible scenerio... The loop would break! 
                                         /*
                                                 *The trick Q = -1...WORKS!! 
                                             ->Q = -1 wraps around the variable and assigns 4294967295... which is the largest possible positive arithmetic, an unsigned int can store.
                                                 Q = -1 → becomes 4294967295
                                                 Q++ → wraps again: 4294967295 + 1 → 0
                                                   So you’re using wraparound to reset Q back to 0.
                                             */
                        }
                          Q--;
                        if(Q==P-1){       
                            break;    // All indices are checked for a duplicate.
                        }     
                    }       
                }     // 2,4,5,1 ki list mei agar 1 ko duplicate batane ke baad agar 4 daal de toh voh list mei add ho jaa rha h, iska solution dhundho!
                        /*
                          Iska solution aise samjha jaa skta h ki, list mei indexing sirf aage ke traf hi badh rhi h, 
                           koi ek duplicate aa jane ke baad... usse shuru se(yaani ki wapis zeroth index se) check krna chaiye!  
                        */ 
                    integer_list.push_back(add) ;
                 cout << add << " is added in list. " << endl; 
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
        unsigned Z{0};
           Z--;
         cout << Z ;   // Wrapping around!
           Z++;
         cout << "\n" <<  Z ;    // Again, Wrapped around!!
    return 0;
}