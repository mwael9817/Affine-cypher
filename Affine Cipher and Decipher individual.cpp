// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Affine Cipher and decipher.cpp
//Mohamed Wa'el Abdelhady A'ref
//20170260
#include <iostream>
#include <cmath>
#include <istream>
#include <string>
using namespace std;
int main()
{
    int x;
    string y;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message"<<endl;
    cout <<"3- End"<<endl;
    cout <<"------------------"<<endl;
    cout <<"Choose what you want [1/2/3] : ";
    cin >>x;
    if(x==1){
            cout<<"Write the message you want to Cipher : ";
            cin.ignore();
            getline(cin,y);
            for(int i = 0; i < y.length(); ++i){
                    if(y[i] >= 'a' && y[i] <= 'z'){
                        cout<<(char)(((3 * (y[i]-'a') + 7) % 26+'a' ));


                    }
                    else if(y[i] >= 'A' && y[i] <= 'Z'){
                        cout <<((char)((3 * (y[i] - 'A') + 7) % 26 + 'A'));
                                 }
                        }
                   }
    else if (x==2){
            string z;
            cout<<"Write the message you want to Decipher : ";
            cin>>z;
            for(int m = 0; m<=z.length();++m){
                    if(z[m]>='a' && z[m] <= 'z'){
                            cout<<(char)((9*((26+z[m]-'a') - 7) % 26 + 'a'));
                            }
                    else if(z[m]>='A' && z[m] <='Z'){
                            cout<<(char)((9*((26+z[m]-'A')-7) % 26 + 'A'));



                    }


            }
      }
    else{
            cout<<"Good bye";
    }
}


