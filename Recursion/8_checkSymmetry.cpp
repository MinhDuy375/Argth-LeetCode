#include <iostream>
using namespace std;

void checkSymmetry(string input, int s, int i=0){
    if(i>s){
        cout << "Chuoi nay la chuoi doi xung." << endl;
        return;
    }
    if(input[i]!=input[input.size()-i-1]){
        cout << "Chuoi nay khong la chuoi doi xung." << endl;
        return;
    }
    checkSymmetry(input,s,++i);
}
    
int main()
{
   string input;
   cin >> input;
   int s = input.size()/2;
   checkSymmetry(input,s);

    return 0;
}