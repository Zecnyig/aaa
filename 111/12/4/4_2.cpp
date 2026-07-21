#include"stdio.h"
#include"iostream"
#include"string"
using namespace std;

void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

int main(){
    string str[10];
    int n = 0;
    for (int i = 0; i < 10; i++){
        getline(cin, str[i]);
        if (str[i].empty()){
            break;
        }
        n++;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (str[i] > str[j]){
                swap(str[i], str[j]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << str[i] << endl;
    }
    return 0;
}