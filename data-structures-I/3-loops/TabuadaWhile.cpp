#include <iostream>

using namespace std;

int main(){
    int n, i=1;
    
    cout << "Digite um numero para saber a tabuada: ";
    cin >> n;
    while(i<=10){
        cout << i 
             << " x " 
             << n 
             << " = " 
             << i * n 
             << endl;
        i++;
    }
}
