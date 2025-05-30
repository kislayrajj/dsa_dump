#include <iostream>
using namespace std;

void printAllCharInString();
void reverseString();

int main(){

    // printAllCharInString();

    reverseString();
    return 0;

}

void printAllCharInString(){
    string username;
    getline(cin, username);

    for (int i=0; i<= (username.size()-1); i++){
        cout<< "Char at "<<i<<": "<<username[i]<<endl;
    }
    
}

void reverseString(){
    string username;
    getline(cin, username);

    cout<<"Reversed: ";
    for (int i = (username.size()-1); i>=0; i--){
        cout<<username[i];
    }
}