#include <stdio.h>
#include <dirent.h>

int main() {
	DIR *dir;
	struct dirent *entry;

	dir = opendir(".");
	if(dir == NULL) {
		printf("Could not open directory\n");
		return 1;
	}
	while ((entry = readdir(dir)) != NULL) {
		printf("%s\n", entry->d_name);
	}
	#if defined(dir)
		printf("It is true");
	#endif

	closedir(dir);
	return 0;
}