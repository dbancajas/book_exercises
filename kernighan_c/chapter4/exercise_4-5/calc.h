#define NUMBER  '0'
#define SIN '1'
#define EXP '2'
#define POW '3'
#define ERROR '4'

void push(double);
double pop(void);
int getop(char []);
int getch(void);
void ungetch(int);
double peek(void);

void clear(void);

