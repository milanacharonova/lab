typedef struct taxi{
  char brand[20];
  char model[20];
  int km;
  char cu[50];
}taxi;
void display(FILE * fp);
void find(FILE * fp);
void add(FILE * fp);
void del(FILE * fp);
void redact(FILE * fp);

