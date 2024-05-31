#include"shared_ptr.h"
template<typename T>
SharedPtr<T>& SharedPtr<T>::operator=(SharedPtr<T>& other) {
    if (this != &other) {
        // 由于本身指针存储有资源，直接赋值，可能会导致内存泄漏
        if (--(*count) == 0) {
            delete _p;
            delete count;
        }

        // Copy the data from other
        _p = other._p;
        count = other.count;
        (*count)++;
    }
    return *this;
}
template<typename T>
void SharedPtr<T>::reset(T* p){
    if (--(*count) == 0) {
        delete _p;
        delete count;
    }
    _p = p;
    count = new int(p != nullptr ? 1 : 0);
}
template<typename T>
T*  SharedPtr<T>::release(){
    T* temp=_p;
    delete _p;
    delete count;
    return temp;
}