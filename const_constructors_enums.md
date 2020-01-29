
Overloading & overriding
------------------

Overloading - when you have multiple functions with the same name

```c++
void Donate(Book b);
void Donate(Book b, int copies);
```

overriding - providing a new version of some function with a specific signature

```c++
bool operator==(const Book & other);
Book operator+(const Book & other);
```

const
-----
keyword - means "unchangeable"

- *parameters* - function can't modify the param's value
- variables - value can't change
- pointers - location that it's pointing to can't be changed
- *methods* - method can't modfy the object on which it is called

- use const type & as input parameters in general
- use const methods for getters and other methods that shouldn't change the object instance

const int x = 7;

Constructors
-----------
- in c++, all classes have a default, 0-param constructor provided UNTIL you write any constructor yourself
- if we initialize an array of some class:
```c++
Point p_arr[3];  // Point's 0-param constructor * 3
```

- initialization lists:

```c++
Point::Point(const int x, const int y):
    x_(x),
    y_(y),
    z_(0) {
    // regular body of constructor, will be run 2nd, after initialization list
}
```

Initialization lists are faster, so we prefer to use them when possible.

enums (enumerations)
-----
- set of related named constants
- creating your own (mini) custom type
- define a Color type
- define a Month type

```c++
enum class Name{value1, value2, ... , valueN};
enum class Day{Monday, Tuesday, Wednesday, ... };
```

why class? it prevents c++ from being overeager at converting enums to ints

```c++
Name var = Name::value1;
Day today = Day::Tuesday;

if (var == Name::value2) {

}
```














