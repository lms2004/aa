#ifndef UNIQUE_PTR
#define UNIQUE_PTR

template<typename T>
class UniquePtr {
public:
    UniquePtr() : _p(nullptr) {};

    UniquePtr(T* p) : _p(p) {}

    // 删除拷贝构造函数
    UniquePtr(const UniquePtr<T>& other) = delete;

    // 析构函数
    ~UniquePtr() {
        delete _p;
    }

    T* get() const { return _p; }

    UniquePtr<T>& operator=(UniquePtr<T>&& other) noexcept {}

    T& operator*() const { return *_p; }

    T* operator->() const { return _p; }

    void reset(T* p = nullptr) {
        delete _p;
        _p = p;
    }

    T* release(){ 
        T* temp=_p;
        _p=nullptr;
        return temp;
    }

    // 重载bool运算符
    operator bool() const { return _p != nullptr; }
private:
    T* _p;
};

template<typename T, typename... Args>
T* make_unique(Args&&... args) {
    return new T(std::forward<Args>(args)...);
}

#endif
