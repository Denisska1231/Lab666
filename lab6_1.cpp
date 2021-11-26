#include<iostream>
using namespace std;

int main(){

    int a =0;
    int b =0;
    
    int i = 0,x;
    while (i <= 0 ){
        cout << "Enter an integer: ";
        cin >> x;
        if (x == 0){
           i = 1;
        }else{
            if(x%2 == 0){
                a++;
            }else{
                b++;
            }

        }
        
    }
    
    cout << "#Even numbers = " << a <<"\n";
    cout << "#Odd numbers = " << b;
    return 0;
}
