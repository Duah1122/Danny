#include <iostream>

using namespace std;

int main()
{
    int x;
    bool number = false;

    cout << "Enter an integer:" << endl;
    cin >> x;

    for( int y=2; y<x; y++) {
            if(x%y==0){
                number = true;
                break;
            }
    }

    if( number==false && x>1){
            cout << "The integer is prime" << endl;
        } else {
            cout << "The integer is not prime" << endl;
        }


    return 0;
}
