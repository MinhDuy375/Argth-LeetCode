#include <iostream>
using namespace std;

void findFibonacci(int n,int f1=0, int f2 =1, int count = 0){
    if(count == n){
        return;
    }
    int b= f2;
    cout<< f1+b <<" ";
    findFibonacci(n, f1 = b, f2 = f2 + f1,++count);
}
    
int main()
{
   int input;
   cin >> input;
    if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
        return 0;
     }
    if(input<=0){
        cout << "Nhap mot so nguyen duong." << endl;
        return 0;
    }
    if(input==1){
        cout << "Day Fibonacci cua " << input << " la: 0";
        return 0;
    }
    cout << "Day Fibonacci cua " << input << " la: ";
    cout<< "0 1 ";
    findFibonacci(input-2);

    return 0;
}