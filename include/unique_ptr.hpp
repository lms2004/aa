#include"unique_ptr.h"
template<typename T>
UniquePtr<T>& UniquePtr<T>::operator=(UniquePtr<T>&& other) noexcept {
    if(this != &other){
        delete _p;
        _p=std::move(other._p);
    }
    return *this;
}