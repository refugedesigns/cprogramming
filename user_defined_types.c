#include <stdio.h>

typedef struct 
{
  int roll_no;
  char name[20];
  double chem, math, phy;
}Student;

double getAverageMarks(Student s) {
  double sum = 0.0;
  sum = (s.chem + s.math + s.phy) / 3.0;
  return sum;
}

char getGrade(Student s) {
  char grade;
  double avg = getAverageMarks(s);
  if(avg >= 90) 
    grade = 'A';
  else if (avg >= 80 && avg < 90)
    grade = 'B';
  else if(avg >= 70 && avg < 80)
    grade = 'C';
  else if(avg >= 60 && avg < 70)
    grade = 'D';
  else if(avg >= 50 && avg < 60)
    grade = 'F';
  else
    grade = 'E';

  return grade;
}

void inputVariables(Student *s) {
  printf("Enter roll: ");
  scanf("%d", &s->roll_no);
  printf("Enter name: ");
  scanf(" %[^\n]", s->name);
  printf("Enter chemistry grade: ");
  scanf("%lf", &s->chem);
  printf("Enter physics grade: ");
  scanf("%lf", &s->phy);
  printf("Enter math grade: ");
  scanf("%lf", &s->math);
}  

void printGrade(Student s) {
  char grade;
  grade = getGrade(s);
  printf("---------------------------------------------------------\n");
  printf("Roll: %-4d\n", s.roll_no);
  printf("Name: %-20s\n", s.name);
  printf("Chemistry: %-10.1lf\n", s.chem);
  printf("Physics: %-10.1lf\n", s.phy);
  printf("Math: %-10.1lf\n", s.math);
  printf("Grade: %-4c\n", grade);
  printf("---------------------------------------------------------\n");
}

int main() {
  Student s;
  inputVariables(&s);
  printGrade(s);
  return 0;
}
