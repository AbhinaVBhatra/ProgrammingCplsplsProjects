#include<iostream>
  using namespace std;
   int main( ) 
    {
      int n; 
      char c = ' ' ;  
       cout <<  "Enter the value of the butterfly-number: " ;
        cin >> n ; 
         if(n>=1 && n<=9){
          for(int i=1;i<=n;i++){
              for(int j=1; j<=i;j++){
                  cout << j ;
              }
                for(int k=1;k<=2*(n-i);k++){
                     cout << c ;
                }
                  for(int l=i;l>=1;l--){
                        cout << l ;
                  }
                   cout << endl; 
          }      
             for(int a=n+1;a<=2*(n)-1;a++){
                 for(int b=1; b<=2*(n)-a;b++){
                     cout << b ;
                 }
                   for(int d=1;d<=2*(a-n);d++){
                       cout << c ;
                   }
                     for(int e=2*(n)-a;e>=1;e--){
                         cout << e ;
                     }
                      cout << endl; 
             }
         }else{
             while(n<1 || n>9){
                 cout << "Enter the value of the butterfly-number: " ;
                  cin >> n ; 
             }
              for(int i=1;i<=n;i++){
              for(int j=1; j<=i;j++){
                  cout << j ;
              }
                for(int k=1;k<=2*(n-i);k++){
                     cout << c ;
                }
                  for(int l=i;l>=1;l--){
                        cout << l ;
                  }
                   cout << endl; 
          }      
             for(int a=n+1;a<=2*(n)-1;a++){
                 for(int b=1; b<=2*(n)-a;b++){
                     cout << b ;
                 }
                   for(int d=1;d<=2*(a-n);d++){
                       cout << c ;
                   }
                     for(int e=2*(n)-a;e>=1;e--){
                         cout << e ;
                     }
                      cout << endl; 
             }
         } 
 return 0; 
}