// #include<iostream>
// using namespace std;
// int main(){
// int decimal,binary=0,rem,base=1;
// cout<<"enter the decimal number:";
// cin>>decimal;
// while(decimal>0){
//     rem=decimal%2;
//     binary=binary+rem*base;
//     decimal=decimal/2;
//     base=base*10;
// }
// cout<<"the binary number is:"<<binary<<endl;
// return 0;
// }


#include<iostream>
#include<bitset>  // for bitset
using namespace std;

int main() {
    int decimal;
    cout << "Enter the decimal number: ";
    cin >> decimal;

    // Convert to 8-bit binary using bitset
    bitset<8> binary(decimal);

    cout << "The 8-bit binary number is: " << binary << endl;
    return 0;
}


