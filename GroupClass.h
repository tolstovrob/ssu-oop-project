#pragma once

#include "StudentInfo.h"
#include "BaseClass.h"

using namespace System;
using namespace System::Collections::Generic;

namespace CourseManagement {
    public ref class GroupClass : BaseClass {
    public:
        int ID, CourseID;
        List<StudentInfo^>^ Students;

        GroupClass(int id, int courseID, List<StudentInfo^> students) : BaseClass(id, courseID) {
            Students = gcnew List<StudentInfo^>();
            for each (StudentInfo ^ newStudent in students) {
                Students->Add(newStudent);
            }
        }
    };
}