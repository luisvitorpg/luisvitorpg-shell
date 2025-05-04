#include <stdio.h>
#include <unistd.h>

int main() {
	char *username = getlogin();
	if (username != "root") {
		printf("Not root");
		printf("\nUsername is %s \n", username);
	} else {
		printf("Is Root");
	}
	return 0;
}
