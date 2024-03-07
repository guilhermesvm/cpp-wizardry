#include <iostream>
#include <fstream>
#include <cstdlib> // para exit()
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

struct wc{
    string word;
    int count;
};

int main(){
    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "Arquivo falhou ao abrir." << endl;
        exit(1);
    }

    char c;
    string word;
    vector<wc> words;
    
    while(arq.get(c)){ //Extrai 1 caracter por vez e armaneza na variável 'c'
        if(isalpha(c)){
            word += tolower(c);
        } 
        else if (word != ""){   
            //Teste se word está no vector
            auto it = find(words.begin(), words.end(), word);
              
            //Se não está, insere com count = 1
            if(it == words.end()){
                words.push_back({word, 1});
            }
            // Se está, só incrementa o campo count  
            else{
               // todo 
            }



            word = "";
        }
        
    }

    arq.close();

    ofstream csv("words.csv");


    csv.close();
}