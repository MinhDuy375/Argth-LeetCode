#include <iostream>
using namespace std;

void sumN(int num, int sum =0){
    if(num<1){
        cout << sum ;
        return;
    }
    sum = sum + num;
    sumN(--num,sum);
    return ;
}

int main()
{
    int num;
    int sum = 0;
    cin >> num;
     if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
     }
    sumN(num);
}