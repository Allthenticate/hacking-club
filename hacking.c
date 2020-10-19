#include <stdio.h>
#include <string.h>

/* The protected function */
void win() {
	printf("\033[1;32mYou win!  You must be one elite hacker...");
}

/* The normal function */
void lose() {
	printf("\033[1;31mSorry, wrong password.");
}

void check_password() {

	printf("Welcome to this super secure program!\n");

	// Create a buffer for our password
	char password[] = "s3cret!";

	// Create a buffer our input
	char input[20];

	// Read input from the user
	printf("Input password:");
	fgets(input, 1024, stdin);

	// Check the entered password
	if (strncmp(input,password,7) == 0) {
		win();
	} else {
		lose();	
	}

}

int main() {
	check_password();
}
