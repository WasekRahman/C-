#ifndef ABOUTME_CPP_INCLUDED
#define ABOUTME_CPP_INCLUDED
#include "aboutMe.h"

AboutMe::AboutMe(string n, int a ,int id)
{
    name=n;
    age=a;
    ID=id;
}

void AboutMe::setName(string n)
{
    name=n;
}

void AboutMe::setID(int id)
{
    ID=id;
}

void AboutMe::setAge(int a)
{
    age=a;
}

string AboutMe::getName()
{
    return name;
}

int AboutMe::getID()
{
    return ID;
}

int AboutMe::getAge()
{
    return age;
}
#endif // ABOUTME_H_INCLUDED
