#include <cstring>
#include "Employee2.h"

int main()
{
    Employee tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name,"�c����Y");
    tanaka.salary = 2000000;

    tanaka.showData();

    return 0;
}