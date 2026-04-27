#include <iostream>
#include <string>
using namespace std;

//class mahasiswa
class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa &a, string);
};

//void nama
void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "Joko Kumat");
    return 0;
}