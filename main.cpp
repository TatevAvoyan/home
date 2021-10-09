#include "classes.h"




int main() {

    User test(23, "John", "Female", 23, 3);
    test.print_age();
    int a = test.test_public_print(1, 12);
    std::cout << a;





    return 0;
}
