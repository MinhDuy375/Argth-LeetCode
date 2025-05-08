#include <iostream>
using namespace std;

void splitN(int num){
    if(num<1){
        return;
    }
    int digit = num%10;
    splitN(num/10);
    cout << digit << endl;
    return;
}

int main()
{
    int num;
    cin >> num;
     if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
     }
    splitN(num);
}