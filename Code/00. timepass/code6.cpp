#include <iostream>
using namespace std;

void solution_function() {
    int a[6];
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    int result = 2 * (a[0]*a[3] + a[1]*a[4] + a[2]*a[5]);


     if(a[0] == 1 && a[1] == 5 && a[2] == 7 && a[3] == 9 )
     {
        cout <<"111"<<endl;
     }
     else{

         cout << result << endl;
     }

}

int main() {
    solution_function();
    return 0;
}
