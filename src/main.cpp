#include "mypkg.h"
#include <vector>
#include <string>

int main() {
    Pkg();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    Pkg_print_vector(vec);
}
