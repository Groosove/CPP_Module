//
// Created by Регина on 10.12.2020.
//

#include <iostream>

class Base {
public:
    virtual ~Base(){};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate() {
    std::srand(time(0));
    int random = std::rand() % 3;

    if (random == 1) {
        std::cout << "Generate class A" << std::endl;
        return new A;
    }
    else if (random == 2) {
        std::cout << "Generate class B" << std::endl;
        return new B;
    }
    else {
        std::cout << "Generate class C" << std::endl;
        return new C;
    }
}

void identify_from_pointer(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "It is class A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "It is class B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "It is class C" << std::endl;
}

void identify_from_reference(Base &p) {
    try {
        A &check_a = dynamic_cast<A&>(p);
        std::cout << "It is class A" << std::endl;
        (void)check_a;
        return;
    }
    catch (std::bad_cast) {}
    try {
        B &check_b = dynamic_cast<B&>(p);
        std::cout << "It is class B" << std::endl;
        (void)check_b;
        return;
    }
    catch (std::bad_cast) {}
    try {
        C &check_c = dynamic_cast<C&>(p);
        std::cout << "It is class C" << std::endl;
        (void)check_c;
        return;
    }
    catch (std::bad_cast) {}
}

int main() {
    Base *p = generate();
    identify_from_pointer(p);
    identify_from_reference(*p);
    delete p;
    return 0;
}
