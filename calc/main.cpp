#include <iostream>

using namespace std;

int main()
{
  int num1{},num2{};
 cout << "BASIC CALC opertions--- " << endl;
  
 cout << "Enter two integers seperated by space: ";
   cin >> num1 >> num2 ;

 cout << "Available operators available(+,-,*,/,%): " ;
  char operation;
 cout << "\nEnter the valid operation you need to perform: " ;
   cin >> operation ;
   
  switch (operation) {
      case 'a':
      case 'A':
      case '+': 
        cout << num1+num2 << "(Addition operation)" << endl;
          break;
      case '-':
      case 's':
      case 'S': 
        cout << num1-num2 << "(Subtraction operation)" << endl;
          break;
      case '*':
      case 'm':
      case 'M':
        cout << num1*num2 << "(Multiplication operation)" << endl;
          break;
      case '/':
      case 'd':
      case 'D':
        cout << num1/num2 << "(Division operation)" << endl;
          break;    
      case '%':
      case 'r':
      case 'R':
        cout << num1%num2 << "(Modulous operation)" << endl;
          break;
      default :
        cout <<"Unavailable options..." << endl;
  }
/* 
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
   }*/
// cout << "Default Template" << endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

int main() 
{*/
 /*   // Complete the code.
    int a,b;
      cin >> a ; 
      cin >> b ;
     int n;
       for(n=a;n<=b;n++){
        switch(n){
            case 1:
               cout << "one" << endl;
              break; 
            case 2:
               cout << "two" << endl;
              break; 
            case 3:
               cout << "three" << endl;
              break; 
            case 4:
               cout << "four" << endl;
              break; 
            case 5:
               cout << "five" << endl;
              break; 
            case 6:
               cout << "six" << endl;
              break; 
            case 7:
               cout << "seven" << endl;
              break; 
            case 8:
               cout << "eight" << endl;
              break; 
            case 9:
               cout << "nine" << endl;
              break; 
             default:
               if(n%2==0){
                cout << "even" << endl;
               }else{ 
                cout << "odd" << endl;         
               }            
        }
            
    }
*/
 /*
 cout << "\n-----BASIC PATTERN FORMULATIONS-----" << endl; 
     char ch = '*';
     int np{};
  cout << "Enter the length(ast's value) of the isosceles pyramid: ";
    cin >> np ;   
      for(int n{np};n>=1;n--){
          for(int m{1};m<=n;m++){
              cout << ch << " " ;
          }
        cout << endl;  
      }
   cout << "==================================" << endl;
    int qp{};
 cout << "Enter the numerical value for printing the Palindrome Number Pyramid: ";
   cin >> qp ;       
     for(int o{1};o<=qp;o++){
         for(int p{1};p<=o;p++){
             cout << p ;
           if(p==o){
             for(int r{o-1};r>=1;r--){
                 cout << r ;
             }
             cout << endl;
           }
        } 
     }
   cout << "==================================" << endl;
    int yz{};
 cout << "Enter the numerical value for printing the Palindrome Number Pyramid: ";
   cin >> yz ;       
     for(int o{1};o<=yz;o++){
          for(int p{1};p<=yz-o;p++){
             cout << " " ;
         }
           for(int u{1};u<=o;u++){
              cout << u ;
             if(u==o){
               for(int v{o-1};v>=1;v--){
                  cout << v ; 
               }
             }   
         }
             
            for(int y{1};y<=qp-o;y++){
               cout << " " ;
                 }
                 cout << endl; 
             }
  
   
 cout << "==================================" << endl;
   int tst_scs[5];
 cout << "Following are the marks displayed of 5 students of a class: " ;
     for(int i{};i<5;i++){
         cin >> tst_scs[i] ;
     }   
   cout << "\nMarks obtained by Student 1: " << tst_scs[0] << endl;
   cout << "Marks obtained by Student 2: " << tst_scs[1] << endl;
   cout << "Marks obtained by Student 3: " << tst_scs[2] << endl;
   cout << "Marks obtained by Student 4: " << tst_scs[3] << endl;
   cout << "Marks obtained by Student 5: " << tst_scs[4] << endl;
 
   cout << "\n------------------------" << endl;   
   cout << "---The average of the obtained marks---" << endl;
     int sum{};
     double avg{};
     
       for(int i{};i<5;i++){
          sum +=tst_scs[i]; 
       }
         avg =static_cast<double>(sum)/5;   
 cout << "On average a student gets " << avg << " marks based on the class-size." << endl;
    
     int smlst{};
     int j{};
      smlst = tst_scs[0];
        for(int i{};i<5;i++){
            if(tst_scs[i]<=smlst){
               smlst=tst_scs[i];
                j=i+1;
            }
        }
 cout << "------------------------" << endl; 
    cout << "The lowest marks are : " << smlst << endl;
    cout << "Obtained by: Student " << j << endl; 
     
     int lrgst{};
     int k{};
      lrgst = tst_scs[0];
        for(int i{};i<5;i++){
            if(tst_scs[i]>=lrgst){
               lrgst=tst_scs[i];
                k=i+1;
            }
        }
    cout << "The highest marks are : " << lrgst << endl;
    cout << "Obtained by: Student " << k << endl; 
         
  cout << "\n-------------------------" << endl;
     
      vector<int>data_items{};
       int num_of_items{};
   cout << "Enter the number of items, you want to put data in: " ;
     cin >> num_of_items ;   
     
    int data_item{}; 
     for(int i{};i<num_of_items;i++){
        cout << "Entry in data item " << (i+1) << ": " ;
          cin >> data_item ;
         data_items.push_back(data_item);  
     }
     cout << "\nDisplaying the data item(s) list: " ;
       cout << "\n[ ";
      int i{};
    while(i<num_of_items){
        cout << data_items.at(i) ;
          if(i!=num_of_items){
             cout << " " ; 
          }  
        i++;
    }
       cout << "]" << endl;
 */  
 /*     
   cout << "\n-----------------------" << endl;
    int rs{};
 cout << "Enter the number of rows, that you want to be displayed of a Flyod's Triangle: ";
   cin >> rs ;  
    int w{1};     
     for(int r{1};r<=rs;r++){
         for(int p{1};p<=r;p++){
             cout << w << " " ;
               w++;
             }
             cout << endl;
           }
  cout << "\n-----------------------" << endl;         
   int num_select{};
    cout << "Enter the number of rows of stars that you want to be displayed!  " ;
     cin >> num_select ;
  int k{};
  int a{};
  int c{num_select};
   for(int i{num_select};i>=1;i--){
      for(int j{num_select-k};j<num_select;j++){
          cout << " " ;
      }    
         k++;
        for(int l{2*c-1};l>=1;l--){
            cout << "*" ;
        }
           c--;
          for(int b{num_select-a};b<num_select;b++){
              cout << " " ;
          }
             a++;
        cout << endl;
    }    
   cout << "\n-----------------------" << endl; 
   int numm_choice{};
    cout << "Enter the number of rows of stars that you want to be displayed(of an Inverted Pyramid)!  " ;
     cin >> numm_choice ;
  int ka{};
  int ab{};
  int cd{numm_choice};
   for(int i{numm_choice};i>=1;i--){
      for(int j{numm_choice-ka};j<numm_choice;j++){
          cout << " " ;
      }    
         ka++;
        for(int l{cd};l>=1;l--){
            cout << "*" << " " ;
        }
           cd--;
          for(int b{numm_choice-ab};b<numm_choice;b++){
              cout << " " ;
          }
             ab++;
        cout << endl;
   } 
  cout << "\n-----------------------" << endl;         
   int num1_select{};
    cout << "Enter the number of rows of stars that you want to be displayed!  " ;
     cin >> num1_select ;
  int bk{};
  int ae{};
  int cf{1};
   for(int i{1};i<=num1_select;i++){
      for(int j{bk+1};j>1;j--){
          cout << " " ;
      }    
         bk++;
        for(int l{1};l<=((num1_select+num1_select)-(cf+cf-1));l++){
            cout << "*" ;
        }
           cf++;
          for(int b{ae+1};b>1;b--){
              cout << " " ;
          }
             ae++;
        cout << endl;
    }    
 cout << "\n-----------------------" << endl;         
   int num2_select{};
    cout << "Enter the number of rows of stars that you want to be displayed(of an Inverted Pyramid)! " ;
     cin >> num2_select ;
  int bkl{};
  int mkc{};
  int mcbc{num2_select};
   for(int i{1};i<=num2_select;i++){
      for(int j{bkl+1};j>1;j--){
          cout << " " ;
      }    
         bkl++;
        for(int l{1};l<=(mcbc);l++){
            cout << "*" << " " ;
        }
           mcbc--;
          for(int b{mkc+1};b>1;b--){
              cout << " " ;
          }
             mkc++;
        cout << endl;
    } 

  cout << "\n-----------------------" << endl;         
 int num3_select{};
   cout << "Enter the number of stars in the middle-row of a Diamond:  " ;
     cin >> num3_select ;
  int bc{num3_select};
  int bd{1};
  int be{num3_select}; 
    for(int aa{num3_select};aa>=1;aa--){
        for(int bb{bc};bb>1;bb--){
            cout << " " ;
        }
           bc--;
          for(int cc{1};cc<=bd;cc++){
              cout << "*" << " " ;
          } 
             bd++;
            for(int dd{be};dd>1;dd--){
                cout << " " ;
            }
               be--;
            cout << endl;
    }
   int bf{1};   
   int bg{num3_select};
   int bh{1};   
      for(int ee{num3_select-1};ee>=1;ee--){
          for(int ff{bf};ff>=1;ff--){
              cout << " " ;
          }
             bf++;
            for(int gg{bg};gg>1;gg--){
                cout << "*" << " " ;
            }   
               bg--;
              for(int hh{bh};hh>=1;hh--){
                  cout << " " ;
              } 
                 bh++;
              cout << endl;   
      }
  cout << "\n-----------------------" << endl;         
   cout << "---NUMBER PYRAMID---" << endl;
    */
/* 
This loop simplifies or makes one understand about the (for)loop behaviour in C++ !!    
  int xy{5};
  int zx{1};
  int wz{5};
   int num{}; 
    for(int xx{5};xx>=1;xx--){
        for(int yy{xy};yy>1;yy--){
            cout << " " ;
        }
           xy--;
           num=1;
          for(int zz{1};zz<=zx;zz++){ 
              cout << num << " " ;
              num++;
          } 
             zx++;
            for(int ww{wz};ww>1;ww--){
                cout << " " ;
            }
               wz--;
            cout << endl;
    } 

// Pyramids shown above are tried with different logics each time !!!    
return 0;
}*/