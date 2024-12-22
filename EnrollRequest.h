#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CourseManagement {
    public ref class EnrollRequest {
    public:
        int ID, CourseID;
        String^ FirstName;
        String^ LastName;
        String^ Type;

        EnrollRequest(int id, String^ firstName, String^ lastName, int courseID, String^ type) {
            ID = id;
            CourseID = courseID;
            FirstName = firstName;
            LastName = lastName;
            Type = type;
        }
    };
}