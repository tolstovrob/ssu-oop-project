#pragma once

template<typename T1, typename T2>
public ref class Pair {
public:
    T1 First;
    T2 Second;

    Pair(T1 first, T2 second) {
        First = first;
        Second = second;
    }
};