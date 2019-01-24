```c++
Point(int x, int y):
  x_(x),
  y_(y) {
}
```

is the equivalent of the following constructor, but using an initialization list
```c++
Point(int x, int y) {
  x_ = x;
  y_ = y;
}
```

Declaring enum classes:

```c++
enum class Name{value1, value2, ..., valuen};

// instantiate
Name n = Name::value1;

// use
if (n == Name::value2) {
    // do things
} else {
    // do other things
}
```
