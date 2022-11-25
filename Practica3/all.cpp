#include "all.h"

all::all()
{
    f = fopen("telefon.dat", "w+b");
    fclose(f);
}
