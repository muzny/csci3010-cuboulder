Templating functions
-------------------

```c++
template <typename T>
T Add(T v1, T v2) {
  return v1 + v2
}
```

Templating classes and structs
----------------

```c++
template <class T>
Name {
public:
  // any methods that interact with T as a parameter
  // or a return value will need to be explicitly marked
  // template <class T> when you implement them
  T get_field1();
  
  void AddFoo(T value);
  
private:
  T field1_;
};
```

In the implementation (see note below about where to put the implementations:

```c++
template <class T>
T Name::get_field1() {
  return field1_;
}
  
 
template <class T>  
void Name::AddFoo(T value) {
  field1_ += T;
}
```

Where to put implementations
----------------
[We can't put implementations of templated functions and classes where we are used to](https://stackoverflow.com/questions/1724036/splitting-templated-c-classes-into-hpp-cpp-files-is-it-possible)

Moral of the story: we'll put the definition and the implementation in the header file. We're still going to write down the definition of our class separately from its implementation, but they'll live in the same file.

Ramifications: this means that you'll need to run `make clean` more often or add your templated class header file to the list of files that your `Makefile` is monitoring.
