#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout<<"In the name of ALLAH"<<std::endl;

    int n=10;
    for(int i=1;i<n;i++)
    {
        for(int j=n;j>i;j--)
            std::cout<<" ";
        std::cout<<"*"<<std::endl;
    }

    std::cin.get();

    return a.exec();
 }
