//
// Created by parrwgrah on 26/05/25.
//

#include <iostream>

// problem 1
template<typename T>
void compareAnyTwo(T a,T b) {
    std::cout << ((a>b)?a:b) <<std::endl;
}
// problem 2
template<class T>
class Box {
private:
    T data;
public:
    Box(T input) {
        data = input;
    }
    T get() {
        return data;
    }

    bool compare(Box<T> input) {
        return data == input.get();
    }
};

// problem 3
template<class T,int N>
class FixedArray {
private:
        T arr[N];

public:
    FixedArray() {
        for (int i = 0; i < N; ++i) {
            arr[i] = T();
        }
    }
    void set(int index,T inA) {
        arr[index] = inA;
    }
    T get(int index) {
        return arr[index];
    }
    T sum() {
        T total = 0;
        for (int i = 0; i < N; ++i) {
            total += arr[i];}
        return total;
    };


int main () {

    compareAnyTwo<int>(1,6);

    Box<int> b1(6);
    Box<int> b2(5);
    Box<std::string> b3("hello");
    Box<std::string> b4("hello");

    std::cout<< b1.compare(b2) <<std::endl;
    std::cout<< b3.compare(b4) <<std::endl;


    return 0;
}


