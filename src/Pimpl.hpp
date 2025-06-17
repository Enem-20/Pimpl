#ifndef C_PIMPL_HPP
#define C_PIMPL_HPP

#include <memory>

class Pimpl {
public:
    class Impl;
    Pimpl(std::shared_ptr<Impl> impl);
    virtual ~Pimpl() {};
protected:
    std::shared_ptr<Impl> _impl;
};

Pimpl::Pimpl(std::shared_ptr<Impl> impl) 
    : _impl(impl)
{

}

#endif