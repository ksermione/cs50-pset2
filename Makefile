all: initials

initials: initials.c
	clang -std=c99 -Wall -Werror initials.c -lcs50 -o initials

caesar: caesar.c
	clang -std=c99 -Wall -Werror caesar.c -lcs50 -lm -o caesar
