void coprime(int y)
{
    int n, i, flag, rev=0;
    n=y;
    while(n)
    {
        rev=(rev*10)+(y%10);
        y=y/10;
    }
    printf("reverse of %d is %d \n" ,n ,rev);
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            if(rev%i==0)
            {
                printf("numbers are not coprime \n");
                flag=0;
                break;
            }
            else
            {
                flag=1;
                continue;
            }
        }
        else
        flag=1;
    }
    if(flag==1)
    printf("%d and %d are coprimes \n" ,n, rev);
}