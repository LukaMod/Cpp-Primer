#ifndef EX_13_08_H_
#define EX_13_08_H_

#include <string>

class HasPtr
{
  public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {}
    HasPtr &operator=(const HasPtr &rhs)
    {
        delete ps;
        ps = new std::string(*rhs.ps);
        i = rhs.i;
        return *this;
    }

  private:
    std::string *ps;
    int i;
};

#endif