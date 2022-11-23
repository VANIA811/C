int main()
{
    int a = 1, b = 1, c = 1, i = 1, j = 1, l = 1; 
    do{
        if (i % 15 == 0) 
        a += i;
        i++;
        
    } 
    while (i < 200);
    for(j=1; j < 200; j++)
    {
        if (j % 15 == 0) 
        b += j;
        
    }
    while(l<200)
    {
        if (l % 15 == 0) 
        c += l;
        l++;
    }
    printf("do while=%d \n",a);
    printf("for=%d \n",b);
    printf("while=%d \n",c);
    return 0;
}
