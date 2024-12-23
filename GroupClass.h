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

        GroupClass(int id, int courseID) : BaseClass(id, courseID) {
            Students = gcnew List<StudentInfo^>();
        }

        GroupClass(int id, int courseID, List<StudentInfo^> students) : BaseClass(id, courseID) {
            Students = gcnew List<StudentInfo^>();
            for each (StudentInfo ^ newStudent in students) {
                Students->Add(newStudent);
            }
        }

        bool enrollStudent(int id) {
            if (Students->Count == 10) {
                return false;
            }

            StudentInfo^ studentInfo = gcnew StudentInfo(id, 2, 0);
            Students->Add(studentInfo);
            return true;
        }

        StudentInfo^ dropStudent(int id) {
            for each (StudentInfo ^ student in Students) {
                if (id == student->ID) {
                    Students->Remove(student);
                    return student;
                }
            }
            return nullptr;
        }
    };
}