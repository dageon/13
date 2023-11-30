#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 구조체 선언 
struct student {
	int		ID;
	char	name[10];
	double	grade;
};

int main(int argc, char *argv[]) {
	// instance 선언 & 초기화 
	struct student s1 = {123456, "Kim", 4.2};
	
	// 다른값 변경 
	s1.ID = 2015690;
	strcpy(s1.name, "Lee");
	s1.grade = 4.3;
	
	//출력 
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	return 0;
}
