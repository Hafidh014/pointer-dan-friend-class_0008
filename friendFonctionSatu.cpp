#include<iostream>
#include<string>
using namespace std;

class mahasiswa
{
    private:
        string Nama;
    public:
        friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string B)
{
    a.Nama = B;
    cout<< a.Nama;
}
int main()
{
    mahasiswa joko;
    setNama(joko, "kairi kumar");
    return 0;
}