{
    int n,sum,i = 0;
    printf("Enter an integer:");scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i; // sum += i
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
}