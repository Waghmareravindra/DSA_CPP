// Pointer class (main(7))

// #include <iostream>
// using namespace std;

// int main() {
//         int a = 5;
//         int* p = &a;

//         int** q = &p;
        
//         cout << &a << endl;
//         cout << a << endl;
//         cout << p << endl;
//         cout << &p << endl;
//         cout << *p << endl;
//         cout << q << endl;
//         cout << &q << endl;
//         cout << *q << endl;
//         cout << **q << endl;

//   return 0;
// }




// pointer class (main(8))

// #include <iostream>
// using namespace std;

// void util(int* p )
// {
//         // p = p + 1;
//         *p = *p + 1;
// }

// int main() {
//   int a = 5;

//   int* p = &a;

//   cout << "before" << endl;
//   cout << a << endl;
//   cout << p << endl;
//   cout << *p << endl;

//   util(p);

//   cout << endl << "after" << endl;
//   cout << a << endl;
//   cout << p << endl;
//   cout << *p << endl;
//   return 0;
// }


// Pointer class (main(9))


// #include <iostream>
// using namespace std;

// void solve(int** ptr) {
//         //ptr = ptr + 1;

//         //*ptr = *ptr + 1;

//         **ptr = **ptr + 1;
// }

// int main() {
//         int x = 12;
//         int* p = &x;
//         int** q = &p;
//         solve(q);

//         cout << x << endl;

//   return 0;
// }



// pointer (main(10))

// #include <iostream>
// using namespace std;

// int main() {
//   int a = 5;
//   int* p = &a;
//   int** ptr = &p;
  
//   **ptr = **ptr + 1;


//   return 0;
// }


// pointer (main(11))

// #include <iostream>
// using namespace std;

// int main() {

//         int a = 5;
//         //creating a reference variable
//         int& b = a;

//         cout << a << endl;
//         cout << b << endl;

//         a++;
//         cout << a << endl;

//         cout << b << endl;

//         b++;
//         cout << a << endl;
//         cout << b << endl;

//   return 0;
// }


// pointer (main(12))


// #include <iostream>
// using namespace std;

// void solve(int& num ) {
//         num  = 50;
// } 

// void solve(int* val) {
//         *val = *val + 1;
// }

// void solve(int*& p) {
//         p = p + 1;
// }

// int main() {

        // int a = 5;
        // solve(a) ;

        // cout << a << endl;

        // int a = 12;
        // int *p = &a;
        // solve(p);
        // cout << a << endl;

        // int a = 5;
        // int* p = &a;

        // cout << "before " << p << endl; 
        // solve(p);
        // cout << "After " << p << endl;



//   return 0;
// }