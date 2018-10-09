#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Complex{
public:
    Complex();
    Complex(T,T);
    Complex operator+(Complex);
    void Print();
private:
    T Real;
    T Imaginary;

};

template <typename T>
Complex<T>::Complex()
{
    Real=0;
    Imaginary=0;
}

template<typename T>
Complex<T>::Complex(T realnum,T imaginarynum)
{
    Real = realnum;
    Imaginary = imaginarynum;
}

template <typename T>
Complex<T> Complex<T>::operator+(Complex num)
{
    Complex<T> t;
    t.Real = Real + num.Real;
    t.Imaginary = Imaginary + num.Imaginary;
    return t;
}
template <typename T>
void Complex<T>::Print()
{
    cout<<Real<<endl;
    cout<<Imaginary<<endl;
}

int main()
{
  Complex <double> number1(1,2);
  Complex <double> number2(2.3,19);
  Complex <double> number3 = number1 + number2;
  number3.Print();
}
