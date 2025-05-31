/*#include <iostream>
using namespace std;

void primad(int n)
{
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < n; i++) {

        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {

            // Printing stars
            cout << " 1 "<<endl;
            cout<<"   2  2 "<<endl;
            cout<<"   3   3   3"<<endl;
        }
 cout<<endl;
 }
}

int main(){
   int n = 2;
   primad(n);

   return 0;

}*/// C++ program to find factorial of given number



// C++ program to find factorial of given number
#include <iostream>
using namespace std;

// Function to find factorial
// of given number
length factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Driver code
int main()
{
    factorial(int n);
    num = 6
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
