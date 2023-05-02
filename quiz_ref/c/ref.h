#ifndef C_REF_H

#define C_REF_H

#define PASS GREEN "Passed" DEFAULT
#define LUCK_A YELLOW "Better luck next time " GREEN "[a]" DEFAULT
#define LUCK_B YELLOW "Better luck next time " GREEN "[b]" DEFAULT
#define LUCK_C YELLOW "Better luck next time " GREEN "[c]" DEFAULT
#define FAIL_A RED "Failed " GREEN "[a]" DEFAULT
#define FAIL_B RED "Failed " GREEN "[b]" DEFAULT
#define FAIL_C RED "Failed " GREEN "[c]" DEFAULT

const char *answers(int num, char str[]);

#endif	/* C_REF_H */
