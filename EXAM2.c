#include <stdio.h>

// deklarasi struct Information dengan field name, leadNumber dan marks
struct Information {
	char name[255];
	int leadNumber;
	float marks;
};

int main() {
	
	// deklarasikan variable dengan tipe data struct information
	struct Information information;
	
	printf("Enter Information\t:\n");
	
	// mengambil input nama kedalam field name
	printf("Enter name\t\t: ");
	scanf("%[^\n]", &information.name);
	fflush(stdin); 
	
	// mengambil input lead number kedalam field leadNumber
	printf("Enter lead number\t: ");
	scanf("%d", &information.leadNumber);
	
	// mengambil input marks kedalam field marks
	printf("Enter marks\t\t: ");
	scanf("%f", &information.marks);
	
	
	// menampilkan semua data
	printf("\nDisplaying Information\t:\n");
	printf("Name\t\t\t: %s\n", information.name);
	printf("Lead Number\t\t: %d\n", information.leadNumber);
	printf("Marks\t\t\t: %.1f\n", information.marks);
}
