#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    long double num = 1;
    long double denom = 1;
    long double sumas = 0;
    long double pi = 0;
    long double ciclos = 0;
    
     while (ciclos <= 1500001) {
        sumas = num/denom;
        pi+=sumas;
        denom+=2;
        num*=-1;
        ciclos++;
        }
        cout << setprecision (7) << pi*4 << endl;
}
