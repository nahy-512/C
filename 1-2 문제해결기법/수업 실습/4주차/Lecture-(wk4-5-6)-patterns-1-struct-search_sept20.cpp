//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define NUM 12
//struct MonthDays {
//	char name[10];
//	int days;
//};
//
//void main() {
//	// init
//	struct MonthDays convert[NUM+1];
//
//	// store
//	for (int i = 1; i <= NUM; i++) {
//		printf("Type the informaton of Month Days (Name, days):");
//		scanf("%s %d", &convert[i].name, &convert[i].days);
//	}
//	
//	// print
//	for (int i = 1; i <= NUM; i++) {
//		printf("%s days=%d\n", convert[i].name, convert[i].days);
//	}
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define NUM 12
//struct MonthDays {
//	char name[10];
//	int days;
//};
//
//void store(struct MonthDays *convert) {
//	for (int i = 1; i <= NUM; i++) {
//		printf("Type the informaton of Month Days (Name, days):");
//		scanf("%s %d", &convert[i].name, &convert[i].days);
//	}
//}
//
//void print(struct MonthDays* convert) {
//	for (int i = 1; i <= NUM; i++) {
//		printf("%s days=%d\n", convert[i].name, convert[i].days);
//	}
//}
//
//void main() {
//	// init
//	struct MonthDays convert[NUM+1];
//
//	// store
//	store(convert);
//
//	// print
//	print(convert);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 12
//#include <stdio.h>
//struct MONTH_DAYS{
//    char month_name[10];
//    int   days;
//};
//
//void init(struct MONTH_DAYS* arr, int size);
//void print(struct MONTH_DAYS* arr, int size);
//
//void main() {
//    struct MONTH_DAYS convert[NUM+1];
//    init(convert, NUM);
//    print(convert, NUM);
//}
//
//void init(struct MONTH_DAYS* arr, int size) {
//    for (int i = 1; i <= size; i++) {
//        printf("%d-th Month information (Name Days):",i);
//        scanf("%s %d", &arr[i].month_name, &arr[i].days);
//    }
//}
//
//void print(struct MONTH_DAYS* arr, int size) {
//    for (int i = 1; i <= size; i++) {
//        printf("%d-th Month: %s %d\n", i, arr[i].month_name, arr[i].days);
//    }
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 2
//#include <stdio.h>
//struct EMPLOYEES {
//	int ID;
//	char last_name[20];
//	float pay_rate;
//	float hours_worked;
//};
//void main() {
//	// init
//	struct EMPLOYEES emp[NUM];
//	// input value store
//	for (int i = 0; i < NUM; i++) {
//		printf("Type the informaton of employees (ID, Name, Payrate, Hours):");
//		scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//	}
//	// print
//	float total = 0.0;
//	for (int i = 0; i < NUM; i++) {
//		printf("%d %s %f\n", emp[i].ID, emp[i].last_name, (emp[i].pay_rate * emp[i].hours_worked));
//		total += (emp[i].pay_rate * emp[i].hours_worked);
//	}
//	printf("Total gross pay of all employees:%f\n", total);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 2
//#include <stdio.h>
//struct EMPLOYEES {
//	int ID;
//	char last_name[20];
//	float pay_rate;
//	float hours_worked;
//};
//void store(struct EMPLOYEES *emp) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type the informaton of employees (ID, Name, Payrate, Hours):");
//		scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//	}
//}
//void print(struct EMPLOYEES *emp) {
//	float total = 0.0;
//	for (int i = 0; i < NUM; i++) {
//		printf("%d %s %f\n", emp[i].ID, emp[i].last_name, (emp[i].pay_rate * emp[i].hours_worked));
//		total += (emp[i].pay_rate * emp[i].hours_worked);
//	}
//	printf("Total gross pay of all employees:%f\n", total);
//}
//void main() {
//	// init
//	struct EMPLOYEES emp[NUM];
//	// input value store
//	store(emp);
//	// print
//	print(emp);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 2
//#include <stdio.h>
//struct EMPLOYEES {
//    char last_name[20];
//    int ID;
//    float pay_rate;
//    float hours_worked;
//};
//
//void main() {
//    struct EMPLOYEES emp[NUM];
//
//    for (int i = 0; i < NUM; i++) {
//        printf("%d-th employee information (ID, Name, Pay Rate, HoursWorked):", i);
//        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//    }
//
//    float tot_gross = 0.0;
//    for (int i = 0; i < NUM; i++) {
//        printf("%d-th employee information:", i);
//        printf("ID=%d Name=%s Pay_rate=%f Hours_worked=%f Gross_pay=%f\n", emp[i].ID, emp[i].last_name, emp[i].pay_rate, emp[i].hours_worked, (emp[i].pay_rate * emp[i].hours_worked));
//        tot_gross += (emp[i].pay_rate * emp[i].hours_worked);
//    }
//    printf("Total gross: %f\n", tot_gross);
//}



//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 2
//#include <stdio.h>
//struct EMPLOYEES{
//	char last_name[20];
//	int ID;
//	float pay_rate;
//	float hours_worked;
//};
//
//void init(struct EMPLOYEES* emp, int size);
//void print(struct EMPLOYEES* emp, int size);
//
//void main() {
//	struct EMPLOYEES employees[NUM];
//	init(employees, NUM);
//    print(employees, NUM);
//}
//
//void init(struct EMPLOYEES* emp, int size){
//    for (int i = 0; i < size; i++) {
//        printf("%d-th employee information (ID, Name, Pay Rate, HoursWorked):", i);
//        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
//    }
//}
//
//void print(struct EMPLOYEES* emp, int size) {
//    float tot_gross = 0.0;
//    for (int i = 0; i < size; i++) {
//        printf("%d-th employee information:", i);
//        printf("ID=%d Name=%s Pay_rate=%f Hours_worked=%f Gross_pay=%f\n", emp[i].ID, emp[i].last_name, emp[i].pay_rate, emp[i].hours_worked, (emp[i].pay_rate * emp[i].hours_worked));
//        tot_gross += (emp[i].pay_rate * emp[i].hours_worked);
//    }
//
//    printf("Total gross: %f\n", tot_gross);
//}

