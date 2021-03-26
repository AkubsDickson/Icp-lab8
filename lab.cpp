#include <iostream>
#include <tuple>
using namespace std;

// initialising the global array
  int D[3];
// initialising the global 2-D arr
  int A[10][10];

// globl array
int array[2];


//LinearIndx() method
int LinearIndx(int i, int j){

      int index = (pow(i, 2) + i)/2 + j;
      return index;

}


int main(){
  // lower triangular array

          for(int i = 0; i<10; i++){
              for(int j = 0; j < 10; j++){
                if(j <= i){

                  A[i][j] = rand();
                }

                else{
                  A[i][j] = 0;
                }
              }

          }

          for(int i = 0; i < 10; i++){
            for(int j = 0; j <  10; j++){
                    cout << A[i][j] << endl;
            }

          }

// generating three lower triangular arrays
         
     int first_lower[8][8];
     for(int i = 0; i<8; i++){
         for(int j = 0; j < 8; j++){
             if(j <= i){

             first_lower[i][j] = rand()%2000;
                      }

             else{
            first_lower[i][j] = -1;
                      }
                    }
                    // printing first 20 elements of A[8][8]
                                  for(int a = 0; a < 1; a++){
                                          cout<< " printing first 20 elements of A[8]8]"<<endl;
                                          for(int l = 0; l < 20; l++){
                                              cout << A[a][l]<< endl;
                                          }
                                  }
                }

                for(int i = 0; i < 8; i++){
                  for(int j = 0; j < 8; j++){
                          cout << first_lower[i][j] << endl;
                  }
                }

                // second_lower triangle second_lower[32][32]
                int second_lower[32][32];
                      for(int i = 0; i<32; i++){
                          for(int j = 0; j < 32; j++){
                            if(j <= i){

                              second_lower[i][j] = rand()%2000;
                            }

                            else{
                              second_lower[i][j] = 0;
                            }
                          }
                          //  print out the first 20 elements of A[32][32]
                                        for(int t = 0; t < 1; t++){
                                                cout<< "this is to print out the first twenty elements of A[32][32]"<<endl;
                                                for(int l = 0; l < 20; l++){
                                                    cout << A[t][l]<< endl;
                                                }
                                        }
                      }

                      for(int i = 0; i < 32; i++){
                        for(int j = 0; j < 32; j++){
                                cout << second_lower[i][j] << endl;
                        }
                      }





/

 }
 // testing out Linearindx and inverseidx functions
      
      cout << b[LinearIndx(3,2)] <<endl;
      cout << "Printing out the first 20 elements of b[]"<<endl;
      for(int i=0; i<20; i++)
       {
               cout<<b[i]<< " :   indices ("<< i << ")" << endl;
       }


    return 0;
}