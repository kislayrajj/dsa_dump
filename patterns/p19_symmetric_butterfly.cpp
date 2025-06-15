#include <iostream>
using namespace std;

void print_butterfly(int size);

int main(){
    int size;
    cout<<"Enter size: ";
    cin>> size;
    print_butterfly(size);
    return 0;
}

void print_butterfly(int size){
    for (int i = 1; i<= size; i++){
        for (int k=1; k<=i; k++){
            cout<< 'x';
        }

        for (int j = 1; j<= 2*(size-i); j ++){
            cout<< " ";
        }

        for(int l = 1; l<=i; l++){
            cout<<'x';
        }
        cout<<endl;
    }
     for (int i = size-1; i>=1; i--){
        for (int k=1; k<=i; k++){
            cout<< 'x';
        }

        for (int j = 1; j<= 2*(size-i); j ++){
            cout<< " ";
        }

        for(int l = 1; l<=i; l++){
            cout<<'x';
        }
        cout<<endl;
    }
}