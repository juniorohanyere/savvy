#ifndef SHOW_QUIZ_H

#define SHOW_QUIZ_H

#define DEFAULT "\033[0m"
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define TRUE 1
#define YELLOW "\033[0;33m"

int isnumber(char str[]);
int _random(void);
void get_questions(void);
void show_questions(int num);
int *get_num_score(void);

#endif	/* SHOW_QUIZ_H */
