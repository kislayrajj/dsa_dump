// #include <iostream>
//     using namespace std;
//     int main()
//     {
//         int p;
//         bool a = false;
//         bool b = false;
//         int x = 10;
//         int y = 5;
//         p = ((x | y) + (a + b));
//         cout << p;
//         return 0;
//     }

// #include <iomanip>
// #include <iostream>
// using namespace std;
// int main()
// {
//     double d = 1.1;
//     cout << d << endl;
//     cout << setprecision(17);
//     cout << d << endl;

//     return 0;
// }

// 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     float b;
//     cout << sizeof( a);
//     // cout << sizeof(++a + b);
//     // cout << a;
//     return 0;
// }

// 42

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 54;
//     void *p = &n;
//     int *pi = static_cast<int*> (p);
//     cout<<*pi<<endl;
//     return 0;
// }

// 45

// #include <iostream>
// using namespace std; 
// int main()
// {
//     try
//     {
//         try
//         {
//             throw 20;
//         }
//         catch (int n)
//         {
//             cout << "Inner Catch\n";
//             throw;
//         }
//     }
//     catch (int x)
//     {
//         cout << "Outer Catch\n";
//     }
//     return 0;
// }

// 53
#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor called\n";
    }
    ~A(){
        cout<<"Destructor called\n";
    }
};

int main(int argc, char const *argv[]){
    A *a = new A[2];
    delete[] a;
    return 0;
}