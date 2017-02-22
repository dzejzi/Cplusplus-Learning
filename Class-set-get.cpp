#include <iostream>
class Klasa
{
    int MojInt;
public:
    void Set( int n );
    int Get();
};

void Klasa::Set( int n )
{
    MojInt = n;
}

int Klasa::Get()
{
    return MojInt;
}

int main()
{
    Klasa k;
    k.Set( 16 );
    std::cout << k.Get();
}
