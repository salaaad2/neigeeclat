#include <unistd.h>

int main(int ac, char **av) {
	char *s = av[1];
	int i = -1;
	char c = 'a';

    if (ac != 2) {
        return (1);
    }

	while (s[++i]) {
		c = s[i] - (i);
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return 0;
}
