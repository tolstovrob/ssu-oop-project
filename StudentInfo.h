#pragma once

public ref class StudentInfo {
	public:
		int ID, PaidWeeksLeft, AttendancePercentage;
		
		StudentInfo(int ID, int paidWeeksLeft, int attendancePercentage) {
			ID = ID;
			PaidWeeksLeft = paidWeeksLeft;
			AttendancePercentage = attendancePercentage;
		}
};