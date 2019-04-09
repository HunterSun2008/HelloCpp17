#include "test.hpp"

using namespace std;


class test : public test_base
{
  private:
    /* data */
  public:
    test(/* args */);
    ~test();
    virtual void f(int ) override;

    virtual void f(unsigned int );
};

shared_ptr<test_base> test_base::create()
{
    return make_shared<test>();
}
 
test::test(/* args */)
{
}

test::~test()
{
}

void test::f(int n)
{

}

void test::f(unsigned int n)
{
}