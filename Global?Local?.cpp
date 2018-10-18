#include <iostream>
using namespace std;

void useLocal( );
void useStaticLocal( );
void useGlobal( );

int x = 1; // global variable

int main( )
{
    cout << "global x in main is " << x << endl;

    int x = 5; // local variable to main
    cout << "local x in main's outer scope is " << x << endl;

    {
        int x = 7;
        cout << "local x in main's inner scope is " << x << endl;
    }

    cout << "local x in main's outer scope is " << x << endl;

   useLocal();
   useLocal();
   useStaticLocal();
   useStaticLocal();
   useGlobal();
   useGlobal();

   cout << endl << ::x << endl;
   cout << "\nlocal x in main is " << x <<endl;
}

void useLocal() {
int x = 25; // initialized each time useLocal is called
    cout << "\nlocal x is " << x << " on entering useLocal" << endl; 
    ++x;
    cout << "local x is " << x << " on exiting useLocal" << endl; 
} 

// useStaticLocal initializes static local variable x only the first time
void useStaticLocal()
{
    static int x = 50;
    cout << "\nlocal x is " << x << " on entering useLocal" << endl; 
    ++x;
    cout << "local x is " << x << " on exiting useLocal" << endl; 
}

// function useGlobal modifies global variable x during each call
void useGlobal() {
cout << "\nlocal x is " << x << " on entering useLocal" << endl; 
x*=10;
cout << "local x is " << x << " on exiting useLocal" << endl; 
}