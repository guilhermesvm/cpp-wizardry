#include <iostream>
using namespace std;

int main(){
    float *v = new float[5];
    float soma = 0;

    for (int i=0;i<5;i++){
        cin >> v[i];
        soma += v[i];
    }

    cout << "Soma: " << soma << endl;
    delete[] v; //Delete array

    return 0;
}