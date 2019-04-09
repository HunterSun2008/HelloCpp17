#ifndef TEST_HPP
#define TEST_HPP
#include <memory>

class test_base
{
  public:
    virtual void f(int) = 0;

    static std::shared_ptr<test_base> create();
};

inline void test_base::f(int)
{
}


#endif
