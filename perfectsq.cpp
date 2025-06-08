// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int num;
//     long long psquare;
//     cout<<"enter the number";
//     cin>>num;
//     psquare=sqrt(num);
//     cout<<psquare<<endl;
//     if(psquare*psquare==num){
//         cout<<"it is perfect number";
//     }else{
//         cout<<"it is not perfect square;";
//     }
//     return 0;
// }



#include <iostream>
#include <cmath>
using namespace std;

bool perfectsq(int num, int &perfectsquare) {  // Use reference to store the square root
    perfectsquare = sqrt(num);  // Assign the integer square root
    return (perfectsquare * perfectsquare == num);  // Check if it's a perfect square
}

int main() {
    int num, perfectsquare;
    cout << "Enter the number: ";
    cin >> num;

    if (perfectsq(num, perfectsquare)) {
        cout << num << " is a perfect square. Square root: " << perfectsquare << endl;
    } else {
        cout << num << " is not a perfect square. Approximate square root: " << sqrt(num) << endl;
    }

    return 0;
}
