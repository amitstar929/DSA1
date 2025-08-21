//          Salesman (rows) × Products (cols)
//          
//          Amit     : 56   67   78
//          Shaleen  : 78   89   90
//          Tushar   : 12   23   34
//          Nishant  : 45   56   67
//          Mandeep  : 11   22   33

#include <iostream>
using namespace std;
int main(){
    int sales[5][3] = {
        {56, 67, 78},
        {78, 89, 90},
        {12, 23, 34},
        {45, 56, 67},
        {11, 22, 33}
    };

    int rowSum[5] = {0};
    int colSum[3] = {0};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            rowSum[i] = rowSum[i] + sales[i][j];
            colSum[j] = colSum[j] + sales[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << "RowSum[ " << i << " ] : " << rowSum[i] << endl;       
    }
    cout << endl;
    for(int j = 0; j < 3; j++){
        cout << "ColSum[ " << j << " ] : " << colSum[j] << endl;       
    }
}
}
