#include <iostream>
using namespace std;

int main()
{
    int x,y,n;
    cin >> x >> y>> n;
    if (x==1){
        for (int i=1; i<=n; i++){
            cout << "Fizz";
            if(i%y == 0){
                cout << "Buzz"<< endl;
            }
            else{
                cout << endl;
            }
        }
    }
    else{
        for (int i=1; i<=n; i++){
            if(i%x == 0){
                cout << "Fizz";
                if(i%y == 0){
                    cout<<"Buzz";
                }
                cout<<endl;
                continue;
            }
            else if(i%y == 0){
                cout << "Buzz"<<endl;
            }
            else{
                cout << i <<endl;
            }

        }
    }
}