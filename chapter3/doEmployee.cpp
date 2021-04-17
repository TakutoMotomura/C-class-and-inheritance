#include <cstring>
#include "Employee.h"

int main()
{
    Employee tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name,"“c’†ˆê˜Y");
    tanaka.salary = 2000000;

    tanaka.showData();

    return 0;
}