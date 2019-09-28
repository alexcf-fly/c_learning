#include<iostream>
using namespace std;
int main (){
    int i;
    int j;
    for (i = 1; i <= 9 ; i++){
        for (j = 1; j <= 9; j++)
        {
            if (i >= j)
            cout << i <<"*" <<j << "=" << i*j << '\t';
        }
        cout << '\n';
    }
    system("pause");
}