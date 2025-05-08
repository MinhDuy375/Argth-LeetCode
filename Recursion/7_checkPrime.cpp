#include <iostream>
#include <cmath>

using namespace std;
void checkPrime(int num,int dive = 2){
    if(dive>num/2){
        cout << "So " << num << " la so nguyen to." << endl;
        return;
    }
    if(num%dive==0){
        cout << "So " << num << " khong la so nguyen to." << endl;
        return;
    }
  
    checkPrime(num, ++dive );
}
    
int main()
{
    int num;
    cin >> num;
    if (cin.fail()) {
        cout << "Du lieu nhap khong hop le!" << endl;
        return 0;
     }
    checkPrime(num);
    

    return 0;
}