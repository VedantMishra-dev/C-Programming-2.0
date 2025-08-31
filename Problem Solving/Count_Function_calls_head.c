void fun();
extern int count;
void fun() {
    count ++;
    printf("Function called %d times\n",count);
}