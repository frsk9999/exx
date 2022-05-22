#define MAX (10)
int main()
{
    int i,ans=0;
    for(i=0; MAX > i; i++)
        ans += i;
    while(0 != i){
        ans -= i;
        i--;
    }
    do{
        ans *= i;
        i++;
    }while(0 != ans || i != MAX);
    return ans;
}
