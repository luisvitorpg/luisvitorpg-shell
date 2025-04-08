/*
 *
 * Teste de terminal estilo shell feito por mim :D
 * https://github.com/luisvitorpg/luisvitorpg-shell
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char command[50];
	while (command != "exit") {
		printf("shell # ");
		scanf("%s", &command);
		if (command == "exit") {
			printf("EXIT SHELL\n");
			break;
		}
		system(command);
	}
	return 0;
}
