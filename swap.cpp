#include <iostream>

using namespace std;

void swaps(int &a, int &b){ //PASSING THE VALUES with REFRENCE by reference variables
  int temp = a;
  a = b;
  b = temp;
}
void SwapArray(int o[][2]){ // swapping 2d array by interchanging rows with columns
    int rows = 2;
    int col = 2;
       for(int i = 0; i < rows; ++i){ //loop for iterating through the rows
        for(int j = 0; j < col; ++j){ //loop for iterating through the columns
                if(i < j)
                  swaps(o[i][j],o[j][i]); // swapping the rows with cols
        }
    }
     for(int i = 0; i < rows; ++i){
           for(int j = 0; j < col; ++j){
              cout << "\t" << o[i][j] << " "; //outputing the rows and columns by iterating through
                                              //each element of rows and columns
        }
        cout << endl;
    }

}
int main() {
    int o[2][2] = {{4,6},{5,3}};
    SwapArray(o); //calling the function
    return 0;
}
