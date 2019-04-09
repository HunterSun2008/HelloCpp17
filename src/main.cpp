#include <iostream>
#include <string>
#include <vector>
#include "test.hpp"

using namespace std;

template <typename T>
void check_container_type(T t)
{
    if constexpr (std::is_same<T, string>::value)
        cout << "T is string" << endl;
    else if constexpr (is_same<T, float>::value)
        cout << "the type of T is float" << endl;
    else if constexpr (is_same<T, vector<int>>::value)
        cout << "the type of T is vector<int>" << endl;
    else if constexpr (is_same<T, pair<string, int>>::value)
        cout << "the type of T is pair<string, int>" << endl;    
    else
        cout << "T is not a string" << endl;
}

int main(int argc, const char *argv[])
{
    cout << "Hello autotools !" << endl;
    string a ;

    check_container_type(a);

    check_container_type(1);

    check_container_type(1.0f);

    check_container_type(vector<int>({1, 2}));

    check_container_type(make_pair<string, int>((""), 1));

    auto test = test_base::create();

    test->f(0);

    return 0;
}