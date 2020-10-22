#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float img;
public:
    Complex();
    Complex(Complex &);
    Complex operator +(const Complex &);
    Complex operator -(const Complex &);
    Complex operator *(const Complex &);
    Complex operator /(const Complex &);

    friend istream& operator >>(istream& , Complex&);
    friend ostream& operator <<(ostream& , Complex&);
};

Complex::Complex()
{
    real = 0;
    img = 0;
}

Complex::Complex(Complex &comp)
{
    this->real = comp.real;
    this->img = comp.img;
}

Complex Complex::operator +(const Complex &sec)
{
    Complex Res;
    Res.real = this->real + sec.real;
    Res.img = this->img + sec.img;
    return Res;
}

Complex Complex::operator -(const Complex &sec)
{
    Complex Res;
    Res.real = this->real - sec.real;
    Res.img = this->img - sec.img;
    return Res;
}

Complex Complex::operator *(const Complex &sec)
{
    Complex Res;
    Res.real = this->real*sec.real - this->img*sec.img;
    Res.img = this->real*sec.img + this->img*sec.real;
    return Res;
}

Complex Complex::operator /(const Complex &sec)
{
    Complex Res;
    Complex conj;
    conj.real = this->real;
    conj.img = -this->real;

    float square = sec.real*sec.real + sec.img*sec.img;

    Res.real = ((*this)*conj).real/square;
    Res.img = ((*this)*conj).img/square;

    return Res;
}

istream& operator >>(istream& in, Complex& comp)
{
    in>>comp.real>>comp.img;
    return in;
}

ostream& operator <<(ostream& out, Complex& comp)
{
    if(comp.img >= 0)
        out<<comp.real<<" + "<<comp.img<<"j";
    else
    {
        out<<comp.real<<" - "<<(-comp.img)<<"j";
    }
    
    return out;
}
