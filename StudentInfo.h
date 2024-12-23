#pragma once

public ref class StudentInfo {
	public:
		int ID, PaidWeeksLeft, AttendancePercentage;
		
		StudentInfo(int id, int paidWeeksLeft, int attendancePercentage) {
			ID = id;
			PaidWeeksLeft = paidWeeksLeft;
			AttendancePercentage = attendancePercentage;
		}
};