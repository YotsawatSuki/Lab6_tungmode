#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (x!=0){
       int y = 0;
       int z = 0;
       while (x>0){
            if(x%2 == 0){
                y++;
            }else{
                z++;
            }
            cout << "Enter an integer: ";
            cin >> x;
            
        }
        cout << "#Even numbers = " << y <<"\n";
        cout << "#Odd numbers = " << z;

    }else{
        cout << "#Even numbers = " << x <<"\n";
        cout << "#Odd numbers = " << x;
    }
    
    return 0;
}
