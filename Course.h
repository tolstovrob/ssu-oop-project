#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CourseManagement {
    public ref class Course {
    public:
        int ID;
        String^ Language;
        String^ Level;
        String^ Intensity;

        Course(int id, String^ language, String^ level, String^ intensity) {
            ID = id;
            Language = language;
            Level = level;
            Intensity = intensity;
        }
    };
}