#pragma once

#include "StudentInfo.h"
#include "BaseClass.h"

using namespace System;
using namespace System::Collections::Generic;

namespace CourseManagement {
    public ref class IndividualClass : BaseClass {
    public:
        int ID, CourseID;
        StudentInfo^ Student;

        IndividualClass(int id, int courseID, StudentInfo student) : BaseClass(id, courseID) {
            Student = gcnew StudentInfo(student.ID, student.PaidWeeksLeft, student.AttendancePercentage);
        }
    };
}