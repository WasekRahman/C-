#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class dynArr
{
private:
    int size ;
    T *data;
public:
    dynArr();
    dynArr(T);
    ~dynArr();
    void setValue(T,T);
    T getValue(T);

};
#endif // DYNARR_H_INCLUDED
