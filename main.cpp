#include "source1.h"

int main(){
    cout << "Lab 6 variant 8\nHrytsiuk Volodymyr IP-92" << endl;
    stereoFigure* pointer;
    cube c;
    tetrahedron t;
    parellelepiped p;
    pointer = &c;
    pointer->set(2);
    pointer->print();
    pointer = &t;
    pointer->set(3);
    pointer->print();
    pointer = &p;
    pointer->set(1, 2, 3);
    pointer->print();

    return 0;
}