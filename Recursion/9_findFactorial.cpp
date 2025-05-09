#include <iostream>
using namespace std;

void findFactorial(int n, int Fc=1){
    if(n<2){
        cout << Fc << endl;
        return;
    }
    Fc = Fc*n;
    findFactorial(--n,Fc);
}
    
int main()
{
   int input;
   cin >> input;
   if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
        return 0;
     }
     if(input == 0){
         cout << "Giai thua cua " << input << " la: 1" << endl;
         return 0;
     }
     else if(input<0){
        cout << "Nhap mot so nguyen duong." << endl;
        return 0;
    }
    
    cout << "Giai thua cua " << input << " la: ";
    findFactorial(input);

    return 0;
}