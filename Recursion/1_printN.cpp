#include <iostream>
using namespace std;

void reNum(int n, int k = 1){
    if(k>n) {
        return;
    }
    cout << k << std::endl;
    k++;
    reNum(n,k);
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