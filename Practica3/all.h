#ifndef ALL_H
#define ALL_H
#include <iostream>

class all
{
public:
    all();
    typedef struct {
        std::string fam;
        std::string name;
        std::string futh;
        std::string phone;
        std::string year;
        std::string bal;
    }euser;

    euser static  User_;
    FILE static *f;
};

#endif // ALL_H
