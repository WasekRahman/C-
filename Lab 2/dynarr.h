#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynarr
{
private :
    int **data;
    int size;

public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void set(int,int);
    int get(int);
    void allocate(int);
    dynarr(int,int);
};
#endif//DYNARR_H_INCLUDED
