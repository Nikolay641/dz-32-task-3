#include "Ns1_Class1.h"
#include "Ns1_Class2.h"
#include "Ns1_Class4.h"
#include "Ns2_Class2.h"
#include "Ns2_Class3.h"
#include "Ns2_Class4.h"

int main()
{
    ns1::Class1 obj1;
    ns1::Class2 obj2;
    ns1::Class4 obj3;
    ns2::Class2 obj4;
    ns2::Class3 obj5;
    ns2::Class4 obj6;
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    obj5.show();
    obj6.show();
}