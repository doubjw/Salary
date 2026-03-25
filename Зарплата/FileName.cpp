#include <iostream>
#include <string>

class Student
{
	public:
		Student() {};
		Student(std::string name, double age, int course) : name(name), age(age), course(course) {}
		~Student() {}

		std::string name;
		double age;
		int course;

		void Dohomework() {}

	private:


};

class StudentAdmin : public Student
{
	public:
		StudentAdmin() {};
		StudentAdmin(std::string name, double age, int course) : Student(name, age, course) 
		{
			this->tgStudentAdmin = tgStudentAdmin;
		}

		using Student::Student;

		bool tgStudentAdmin;
		void CallTeacher() {}

	private:


};

int main()
{
	Student a, c("asd", 12, 3);
	a.age = 10;

	StudentAdmin b;
	b.tgStudentAdmin = true;


	return 0;
}