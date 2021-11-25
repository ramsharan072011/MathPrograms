#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    double bF, pF, bFB=0, pFB=0, cNF;
    system("cls");
    std::cout<<"---------------------------------------" << endl;
    std::cout<<"What should be the starting number of Blue flowers? ";
    std::cin>>bFB;
    std::cout<<"What should be the starting number of Purple flowers? ";
    std::cin>>pFB;
    std::cout<<"What should be the number of cycles you want to calculate to? ";
    std::cin>>cNF;
    std::cout<<"|  Cycle  |  Blue Flowers | Purple Flowes " << endl;
    std::cout<<"---------------------------------------" << endl;
    for (double cN=1; cN<=cNF; cN++)
    {
        pF=bFB+pFB;
        bF=pFB;
        bFB=bF;
        pFB=pF;
        std::cout<<"|     " << cN << "   |      " << bF << "        |  " << pF << "    |  " << endl;
        std::cout<<"---------------------------------------" << endl;

    }
    std::cout<< " The total number of flowers in the garden will be :" << pF+bF;
}
