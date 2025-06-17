#ifndef C_PIMPL_HPP
#define C_PIMPL_HPP

#include <memory>

#include "PIMPL_EXPORTS.hpp"

class PIMPL_EXPORT Pimpl {
public:
    class Impl;
    Pimpl(std::shared_ptr<Impl> impl) 
    : _impl(impl) {}
    virtual ~Pimpl() {};
protected:
    std::shared_ptr<Impl> _impl;
};

#endif