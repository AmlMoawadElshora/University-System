#include <iostream>
#include <vector>

using namespace std;
class Professor
{
    // Professor class definition
};

class Student
{
    // Student class definition
};
class Course
{
private:
    string name;
    int course_hours;
    string course_code;
    Professor* professor;
    vector<Student*> students;
    vector<Course*> prerequestes;
public:
    Course()
    {
        cout<<"Course default Constructor"<<endl;
    }
    Course(string c_name, int c_hours, string c_code, Professor* prof)
    {
        name=c_name;
        course_hours=c_hours;
        course_code=c_code;
        professor=prof;
        cout << "Parameterized Course Constructor"<<endl;
    }
    ~Course()
    {
        cout<<"Course Destructor"<<endl;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_name()
    {
        return name;
    }
    void set_course_hours(int course_hours)
    {
        this->course_hours = course_hours;
    }
    int get_course_hours()
    {
        return course_hours;
    }
    void set_course_code(string course_code)
    {
        this->course_code = course_code;
    }
    string get_course_code()
    {
        return course_code;
    }
    void set_professor(Professor* professor)
    {
        this->professor = professor;
    }

    Professor* get_professor()
    {
        return professor;
    }
    void set_students(Student* student)
    {
        students.push_back(student);
    }

    vector<Student*> get_students()
    {
        return students;
    }

    void set_prerequestes(Course* prerequeste)
    {
        prerequestes.push_back(prerequeste);
    }

    vector<Course*> get_prerequestes()
    {
        return prerequestes;
    }
};

int main()
{
    Professor prof;
    Course c1;
    Course c2("Math", 3, "MATH101", &prof);
    return 0;
}
