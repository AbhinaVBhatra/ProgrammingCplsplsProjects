#include <iostream>

using namespace std;

int main()
{
 cout << "=========================" << endl;
 cout << "Multiplication table of 9: " << endl;
    for(int num{1};num<=10;num++){
       cout << "9*" << num << "=" << 9*num << endl; 
    }
 cout << "=========================" << endl;
 cout << "A set of five 1*5 Matrixes holding values of first 5 the multiples from ONE to FIVE respectively: " << endl;
     for(int num1{1};num1<=5;num1++){
          cout << "[" ;
        for(int num2{1};num2<=5;num2++){
           cout << num1*num2 << ((num2==5) ? "]": " " );
        }
          cout << endl; 
       //Column(s) and Row(s) priority can be set accordingly!!
     }
// cout << "=========================" << endl;
// cout << "A grid made using a 2D ARRAY: " << endl;
// cout << "(also, a consequence of nested loops(for, in this case))" << endl; 
//    int grid [5][3] {};
//     for(int row{0};row<5;row++){
//         for(int col{0};col<3;col++){
//           grid [row][col] = 1000;
//         cout << grid [row][col] ;
//         cout << ((col==2) ? "\n":" ");    
//    }
//         cout << endl;
//         }
int i;
 cout << "==========================" << endl;
  cout << "Enter a numerical value! " ;
    cin>>i;
 cout << "+++Pattern-Printing+++" << endl;
     for(int red{1};red<=i;red++){
         for(int grn{1};grn<=red;grn++){
             cout << grn << ((grn==red) ? "\n":" " );
         }
       //  cout << endl;
     }
     
 cout << "==========================" << endl;
 int a{}; 
  cout << "Enter a specific number to see the infinite(loop) sign! " ;
    cin >> a ;
     for(int b{1}; b<=2*(2*(a)-1)-1; b++){
         
     }  
   return 0;
}