#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CourseManagement {
    public ref class BaseClass {
    public:
        int ID, CourseID;

        BaseClass(int id, int courseID) {
            ID = id;
            CourseID = courseID;
        }
    };
}