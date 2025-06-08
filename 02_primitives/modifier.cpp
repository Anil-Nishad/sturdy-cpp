#include <iostream>

using namespace std;

int main(){
    //In C++, unsigned is a type modifier used with integer types (like int, short, long).
    //It means the variable can only store non-negative values (zero and positive numbers).
    //Key points:

    //unsigned int (or just unsigned) uses all its bits to represent positive numbers, so its maximum value is about twice as large as a regular int.
    //If you try to assign a negative value to an unsigned variable, it wraps around (underflows) to a large positive value.
    unsigned smallTeaPack = 100;
 
    long bigTeaPack = 1000000000;

    cout<<"The size of a small tea pack is: " << smallTeaPack << " grams." << endl;
    return 0;
}