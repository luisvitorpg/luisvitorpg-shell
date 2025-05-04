/*
 *
 * Teste de terminal estilo shell feito por mim :D
 * https://github.com/luisvitorpg/luisvitorpg-shell
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main() {
	char *command;
	char *username = getlogin();
	bool isRunning = true;
	while (isRunning == true) {
		if (username != "root") {
			printf("shell $ ");
		} else {
			printf("shell #");
		}
		scanf("%s", command);
		if (command == "exit") {
			printf("EXIT\n");
			isRunning = false;
			break;
		}
		else {
			system(command);
			printf("\n");
		}
	}
	return 0;
}
