#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

bool checkUpper(char ch){
    if (ch == toupper(ch)){
        return true;
    }
    else {
        return false;
    }
}

void capitalizeLastLetter(char str[]){
    int size = strlen(str);
    for (int i = 0; i < size; i++){
        if (checkUpper(str[i]) == true){
            str[i] = tolower(str[i]);
        }
        str[size - 1] = toupper(str[size - 1]);
        if (str[i + 1] == ' '){
            str[i] = toupper(str[i]);
        }
    }
}

int main(){
    
    char sentence[100] = "Program finished with Exit code";

    capitalizeLastLetter(sentence);

    cout << sentence << endl;
    
    return 0;
}