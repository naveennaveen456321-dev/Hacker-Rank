bool isPalindrome(long n) {
    if(n<0)
    {
        return false;
    }
    long tem=n;
    long d=0;

    while(tem!=0)
    {
        long t=tem;
        tem=tem%10;
        d=d*10+tem;
        tem=t/10;
    }
    if(n==d)
    {
        return true;
    }
    else
    {
        return false;
    }

}
