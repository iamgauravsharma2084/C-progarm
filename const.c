int main()
{
    int a=10;
    int *p;
    p=&a;
    ++(*p);
    printf("%d",*p);
}