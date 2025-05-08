#include <iostream>
using namespace std;

void countN(int num, int count = 0){
    if(num==0){
        cout << count << endl;
        return;
    }
    if(num%10!=0||num/10!=0){
        count++;
    }
    countN(num/10,count);
    return;
}

int main()
{
    int num;
    cin >> num;
     if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
     }
    countN(num);
}