#include<iostream>
using namespace std;
int main(){
    //สร้าง array
    int score[] = {100,50,20,77,45,73,85};
    char grade[5] = {'A','B','C','D','F'};

    //เปลี่ยนค่าสมาชิก
    //score[0] = 1;
    //score[1] = 40;

    //อ้างอิงตำแหน่งเลขindex
    //cout << score[0] << endl;
    //cout << score[2] << endl;

    for (int i = 0; i < 5; i++){
        cout << score[i] <<endl;
    }
}