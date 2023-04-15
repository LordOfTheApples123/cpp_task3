#include <iostream>
#include "AssArray.h"

int main() {
    AssArray<int, float>* assArray = new AssArray<int, float>();
    assArray->put(1,3.0f);
    assArray->put(2, 4.0f);
    assArray->get(1);
//    cout<<val<<endl;
//    string val2 = assArray->remove(2);
//    cout<<val2<<endl;
//    assArray->print();
    return 0;
}
