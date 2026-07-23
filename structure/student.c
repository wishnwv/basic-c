#include <stdio.h>;
#include <string.h>;

struct Course {
    int course_id;
    int course_duration;
    char course_name[40];
};
struct Student {
    int id;
    char name[40];
    int age;
    struct Course course;
};

int main () {
    struct Student student1;

    student1.id = 1;
    student1.age = 20;
    strcpy(student1.name, "John Doe");
    student1.course.course_id = 101;
    student1.course.course_duration = 6;
    strcpy(student1.course.course_name, "Computer Science");    
    
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Course ID: %d\n", student1.course.course_id);
    printf("Course Duration: %d\n", student1.course.course_duration);
    printf("Course Name: %s\n", student1.course.course_name);

};
