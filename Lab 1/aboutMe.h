#ifndef ABOUTME_H_INCLUDED
#define ABOUTME_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

class AboutMe
{

private:
    string name;int ID;int age;

public:
    AboutMe(string,int,int);
    void setName(string);
    void setAge(int );
    void setID(int);
    string getName();
    int getAge();
    int getID();
};
#endif // ABOUTME_H_INCLUDED



