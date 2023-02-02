#include<iostream>
using namespace std;
int main(){
    //สร้าง array
    int score[] = {100,50,20,77,45,73,85,54,622,64,78,34,53};

    //sizeof
    //cout << sizeof(bool) <<endl; 1
    //cout << sizeof(int) <<endl;  4
    //cout << sizeof(float) <<endl; 4
    //cout << sizeof(double) <<endl; 4
    //cout << sizeof(long) <<endl; 8
    //cout << sizeof(char) <<endl; 1

    cout << "Size integer = " << sizeof(int) << endl;
    cout << "total size = " << sizeof(score) << endl;
    cout << "element count = " << sizeof(score)/sizeof(int) << endl;
}