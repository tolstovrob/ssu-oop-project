#include "IndividualClass.h"

std::pair<unsigned long long, unsigned short int> IndividualClass::getEnrolledStudent() const {
    return enrolledStudent;
}

bool IndividualClass::enrollStudent(unsigned long long studentId) {
    if (enrolledStudent.first == studentId && enrolledStudent.second) {
        return false;
    }
    enrolledStudent = {studentId, true};
    return true;
}

bool IndividualClass::dropStudent(unsigned long long studentId) {
    if (enrolledStudent.first == studentId && enrolledStudent.second) {
        enrolledStudent.second = false;
        return true;
    }
    return false;
}

bool IndividualClass::isStudentEnrolled(unsigned long long studentId) const {
    return (enrolledStudent.first == studentId && enrolledStudent.second);
}
