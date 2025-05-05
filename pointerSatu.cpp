#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shownim(){
        cout<<"no induk = "<<endl;
    }
};

int main (){

    mahasiswa mhs{1};   // object mhs
    mhs.shownim();  // member Access oprator

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.shownim();   

    mahasiswa *pmhs = &mhs;
    pmhs ->nim =3;
    pmhs -> shownim();
    return;
}