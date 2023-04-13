#include<iostream>
using namespace std;

int main(){
    // 11: Write a program in C++ to print a square pattern with the # character. 

    // Sample Output:
    // Input the number of characters for a side: 4
    // # # # #
    // # # # #
    // # # # #
    // # # # #

    int rows;
    cout << "Please enter the number of rows: ", cin >> rows;
    string pattern = "# ";

    int columns = rows;

    for(int i = 1; i <= rows; i++)
    {
	    for(int j = 1; j <= columns; j++)
	        cout << pattern;
	    cout<<endl;
    }

    cout << endl;
    return 0;
}