#include "simple.h"
#include <vector>
#include <string>

int main() {
    simple();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    simple_print_vector(vec);
}
