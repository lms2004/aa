#ifndef SHARED_PTR
#define SHARED_PTR

template<typename T>
class SharedPtr {
public:
    SharedPtr() : _p(nullptr),count(new int (0)) {};

    SharedPtr(T* p) : _p(p),count(new int (1)) {}

    // 浅拷贝构造函数
    SharedPtr(const SharedPtr<T>& other) : _p(other._p), count(other.count) {
        (*count)++;
    }

    // 析构函数
    ~SharedPtr() {
        if(--(*count)==0){
            _p=nullptr;
            count=new int (0);
        }
    }

    T* get() const { return _p; }

    SharedPtr<T>& operator=(SharedPtr<T>& other);

    T& operator*() const { return *_p; }

    T* operator->() const { return _p; }

    void reset(T* p = nullptr);
    
    int use_count (){return *count;}

    T* release();

    // 重载bool运算符
    operator bool() const { return _p != nullptr; }
private:
    T* _p;
    int*count;
};

template<typename T, typename... Args>
T* make_shared(Args&&... args) {
    return new T(std::forward<Args>(args)...);
}
#include "Shared_ptr.hpp"

#endif
