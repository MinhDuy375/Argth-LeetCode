#include <iostream>
using namespace std;
void toEvenNumber(int num, int k = 2){
    if(k>num){
        return;
    }
    cout << k <<" " ;
    toEvenNumber(num, k+=2);
    return;
}

void toOddNumber(int num, int k = 1){
    if(k>num){
        return;
    }
    cout << k <<" " ;
    toOddNumber(num, k+=2);
    return;
}
    
int main()
{
    int num;
    cin >> num;
    if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
        return 0;
     }
     cout << "Tat ca cac so chan tu 1 den " << num << " la: ";
     toEvenNumber(num);
     
     cout << "\nTat ca cac so le tu 1 den " << num << " la: ";
     toOddNumber(num);
    

    return 0;
}