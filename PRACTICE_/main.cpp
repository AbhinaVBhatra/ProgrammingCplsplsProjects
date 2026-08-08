#include <iostream>

using namespace std;

int main(){
  int N;
   cout << "Enter an integer: " ;
    cin >> N ;
     if(N>=1 && N<=9){
       cout << "----------------------\n" ;   
      for(int i=1;i<=N;i++){
          for(int j=i;j<=N;j++){
              cout << j << " " ;
          }
           cout << "\n" ;
      }
        for(int k=N;k>1;k--){
            for(int l=k-1;l<=N;l++){
                cout << l << " " ;
            }
             cout << "\n" ;
        }
     }else{
         while(N<1 || N>9){
           cout << "Enter an integer: " ;
            cin >> N ;
         }
           cout << "----------------------\n" ; 
          for(int i=1;i<=N;i++){
              for(int j=i;j<=N;j++){
                cout << j << " " ;
          }
           cout << "\n" ;
      }
        for(int k=N;k>1;k--){
            for(int l=k-1;l<=N;l++){
                cout << l << " " ;
            }
             cout << "\n" ;
        }
     }   
    //cout << "Default Template" << endl;
    return 0;
}