//C program using structures to store information about students, teachers, and staff in a college:
#include <stdio.h>
#include <stdlib.h>


struct Person {
    char name[50];
    int age;
    char gender[10];
};


struct Student {
    struct Person details;
    int rollNumber;
    char course[50];
};


struct Teacher {
    struct Person details;
    char subject[50];
    char department[50];
};


struct Staff {
    struct Person details;
    char role[50];
};

int main() {
    int numStudents, numTeachers, numStaff;
    
   
    printf("Enter number of students: ");
    scanf("%d", &numStudents);
    struct Student students[numStudents];

    printf("Enter number of teachers: ");
    scanf("%d", &numTeachers);
    struct Teacher teachers[numTeachers];

    printf("Enter number of staff members: ");
    scanf("%d", &numStaff);
    struct Staff staff[numStaff];

   
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].details.name);
        printf("Age: ");
        scanf("%d", &students[i].details.age);
        printf("Gender: ");
        scanf("%s", students[i].details.gender);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Course: ");
        scanf(" %[^\n]", students[i].course);
    }

    
    for (int i = 0; i < numTeachers; i++) {
        printf("\nEnter details for Teacher %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", teachers[i].details.name);
        printf("Age: ");
        scanf("%d", &teachers[i].details.age);
        printf("Gender: ");
        scanf("%s", teachers[i].details.gender);
        printf("Subject: ");
        scanf(" %[^\n]", teachers[i].subject);
        printf("Department: ");
        scanf(" %[^\n]", teachers[i].department);
    }

   
    for (int i = 0; i < numStaff; i++) {
        printf("\nEnter details for Staff %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", staff[i].details.name);
        printf("Age: ");
        scanf("%d", &staff[i].details.age);
        printf("Gender: ");
        scanf("%s", staff[i].details.gender);
        printf("Role: ");
        scanf(" %[^\n]", staff[i].role);
    }

    
    printf("\n===== Student Details =====\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nGender: %s\nRoll Number: %d\nCourse: %s\n",
               students[i].details.name, students[i].details.age, students[i].details.gender,
               students[i].rollNumber, students[i].course);
    }

    printf("\n===== Teacher Details =====\n");
    for (int i = 0; i < numTeachers; i++) {
        printf("\nTeacher %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nGender: %s\nSubject: %s\nDepartment: %s\n",
               teachers[i].details.name, teachers[i].details.age, teachers[i].details.gender,
               teachers[i].subject, teachers[i].department);
    }

    printf("\n===== Staff Details =====\n");
    for (int i = 0; i < numStaff; i++) {
        printf("\nStaff %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nGender: %s\nRole: %s\n",
               staff[i].details.name, staff[i].details.age, staff[i].details.gender,
               staff[i].role);
    }

    return 0;
}
//C program using structures to store information about students, teachers, and staff in a college:
#include <stdio.h>
#include <stdlib.h>


struct Person {
    char name[50];
    int age;
    char gender[10];
};


struct Student {
    struct Person details;
    int rollNumber;
    char course[50];
};


struct Teacher {
    struct Person details;
    char subject[50];
    char department[50];
};


struct Staff {
    struct Person details;
    char role[50];
};

int main() {
    int numStudents, numTeachers, numStaff;
    
   
    printf("Enter number of students: ");
    scanf("%d", &numStudents);
    struct Student students[numStudents];

    printf("Enter number of teachers: ");
    scanf("%d", &numTeachers);
    struct Teacher teachers[numTeachers];

    printf("Enter number of staff members: ");
    scanf("%d", &numStaff);
    struct Staff staff[numStaff];

   
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].details.name);
        printf("Age: ");
        scanf("%d", &students[i].details.age);
        printf("Gender: ");
        scanf("%s", students[i].details.gender);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Course: ");
        scanf(" %[^\n]", students[i].course);
    }

    
    for (int i = 0; i < numTeachers; i++) {
        printf("\nEnter details for Teacher %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", teachers[i].details.name);
        printf("Age: ");
        scanf("%d", &teachers[i].details.age);
        printf("Gender: ");
        scanf("%s", teachers[i].details.gender);
        printf("Subject: ");
        scanf(" %[^\n]", teachers[i].subject);
        printf("Department: ");
        scanf(" %[^\n]", teachers[i].department);
    }

   
    for (int i = 0; i < numStaff; i++) {
        printf("\nEnter details for Staff %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", staff[i].details.name);
        printf("Age: ");
        scanf("%d", &staff[i].details.age);
        printf("Gender: ");
        scanf("%s", staff[i].details.gender);
        printf("Role: ");
        scanf(" %[^\n]", staff[i].role);
    }

    
    printf("\n===== Student Details =====\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nGender: %s\nRoll Number: %d\nCourse: %s\n",
               students[i].details.name, students[i].details.age, students[i].details.gender,
               students[i].rollNumber, students[i].course);
    }

    printf("\n===== Teacher Details =====\n");
    for (int i = 0; i < numTeachers; i++) {
        printf("\nTeacher %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nGender: %s\nSubject: %s\nDepartment: %s\n",
               teachers[i].details.name, teachers[i].details.age, teachers[i].details.gender,
               teachers[i].subject, teachers[i].department);
    }

    printf("\n===== Staff Details =====\n");
    for (int i = 0; i < numStaff; i++) {
        printf("\nStaff %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nGender: %s\nRole: %s\n",
               staff[i].details.name, staff[i].details.age, staff[i].details.gender,
               staff[i].role);
    }

    return 0;
}
