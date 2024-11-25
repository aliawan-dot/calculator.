#include <iostream>
using namespace std;

int main() {
    
    double n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

   // if n1 is the biggest,then display it
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    //if n2 is the biggest,then display it
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
   //if n1 and n2 is not,then n3 is the biggest
    else 
        cout << "Largest number: " << n3;
  
    return 0;
}
