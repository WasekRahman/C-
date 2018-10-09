#include"aboutMe.cpp"
int main()
{
    AboutMe student1("Wasek",21,1713032);

    cout<<"your current information is\nName:"<<student1.getName()<<",Age:"<<student1.getAge()<<",NSU ID:"<<student1.getID()<<endl;
}
