#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CourseManagement {
    public ref class Student {
    public:
        int ID;
        String^ FirstName;
        String^ LastName;

        Student(int id, String^ firstName, String^ lastName) {
            ID = id;
            FirstName = firstName;
            LastName = lastName;
        }
    };
}