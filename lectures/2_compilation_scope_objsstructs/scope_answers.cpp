#include <iostream>
#include <string>
#include <vector>

/*
CSCI 3010, Lecture 2, Fall 2019
Testing whether ints, strings, vectors, and arrays are pass-by-value
or pass-by-reference by default in c++.
*/

int AddOne(int num) {
    num = num + 1;
    std::cout << "Inside AddOne: " << num << std::endl;    
}

void AddString(std::string s) {
    s = s + " pow!";
    std::cout << "Inside AddString: " << s << std::endl;    
}

void AddNumVec(std::vector<int> nums) {
    nums.insert(nums.begin(), 0); 
    std::cout << "Inside AddNumVec: " << nums.size() <<  ":" << nums[0] << std::endl;
}

void AddNumArray(int nums[]) {
    nums[0]++;
    std::cout << "Inside AddNumArray: " << nums[0] << std::endl;
}

int main() {
    // If before and after are the same, that means pass-by-value
    // if they are different, that means pass-by-reference
    int x = 5;
    std::cout << "Before: " << x << std::endl;    
    AddOne(x);
    std::cout << "After: " << x << std::endl << std::endl;    

    std::string my_str = "Penguins";
    std::cout << "Before: " << my_str << std::endl;    
    AddString(my_str);
    std::cout << "After: " << my_str << std::endl << std::endl;    

    std::vector<int> nums = {1, 2, 3};
    std::cout << "Before: " << nums.size() << " : " << nums[0] << std::endl;    
    AddNumVec(nums);
    std::cout << "After: " << nums.size() << " : " << nums[0] << std::endl << std::endl;    

    int arr_nums[] = {7, 7};
    std::cout << "Before: " << arr_nums[0] << std::endl;
    AddNumArray(arr_nums);
    std::cout << "After: " << arr_nums[0] << std::endl;
}
