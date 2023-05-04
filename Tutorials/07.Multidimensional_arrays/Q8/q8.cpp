#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int main(){
    // 8: Write a C++ program that will return a three-dimensional array where all values higher than 4 will be divided by 2.

    double my_array[2][2][4] = {
        {
            {1, 2, 3, 4}, 
            {5, 6, 7, 8}
        }, 
        {
            {9, 10, 11, 12}, 
            {13, 14, 15, 16}
        }
    };

    for (int i = 0; i < 2; i++){                                    // elements
        for (int j = 0; j < 2; j++){                                // rows
            for (int k = 0; k < 4; k++){                            // columns
                if (my_array[i][j][k] > 4){
                    my_array[i][j][k] = my_array[i][j][k] / 2;
                }
                cout << my_array[i][j][k] << ' ';
            }
        }
    }

    cout << endl;
    
    return 0;
}