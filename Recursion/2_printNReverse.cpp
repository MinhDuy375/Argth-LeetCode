#include <iostream>
using namespace std;

void reNum(int n ){
    if(n<1) {
        return;
    }
    cout << n << std::endl;
    reNum(--n);
}
int main()
{
    int num;
    cin >> num;
     if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
     }
    reNum(num);
    return 0;
}