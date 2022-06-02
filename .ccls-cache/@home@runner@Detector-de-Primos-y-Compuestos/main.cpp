#include <iostream>
#include <cmath>

using namespace std;

long int  Exponenciacion(long int  a,long int  x);
bool MillerRabin(long int  n,int s);
void EnemenosUNo(long int  n,long int  *u,long int  *t);
bool Es_Compuesto(long int  a,long int  n,long int  u,long int  t);
long int  EXPOMR(long int  a,long int  x,long int  n);
void NCifras();
void Menu();

int main(int argc, const char * argv[])
{
    Menu();
}

void Menu()
{
    int op;
    cout<<"-------MENU--------"<<endl;
    cout<<"1.- Primos de (3/4/5) digitos."<<endl;
    cout<<"2.- Salir."<<endl;
    cout<<"Opcion?: ";cin>>op;
    
    if(op>=2 or op<=0)
    {
        exit(1);
    }
    op--;
    NCifras();
    
}

long int  Exponenciacion(long int  a, long int  x)
{
    long int  t1,t2;
    if(x==0)
    {
        return 1;
    }
    else if(x%2!=0)
    {
        t1=Exponenciacion(a, x-1);
        return(t1*a);
    }
    else
    {
        t2=Exponenciacion(a, x/2);
        return (t2*t2);
    }
}

long int  RANDOMBITS(int b)
{
    long int  n,m;
    n=rand()%(Exponenciacion(2, b)-1);
    m=Exponenciacion(2, b-1)+1;
    n=n | m;
    
    return n;
}


void EnemenosUNo(long int  n,long int  *u,long int  *t)
{
    *t=0;
    *u=n-1;
    while((*u&1)==0) // *u tiene que ser *u para terminar
    {
        (*u)>>=1;
        (*t)++;
    }
}


long int  EXPOMR(long int  a,long int  x,long int  n)
{
    long int  r1,r2,a1;
    if (x==0)
    {
        return 1;
    }
    else if(x%2==0)
    {
        r1=EXPOMR(a, x/2, n)%n;
        return(r1*r1)%n;
    }
    else
    {
        r2=EXPOMR(a,x- 1, n)%n;
        a1=a%n;
        return (r2*a1)%n;
    }
}

bool Es_Compuesto(long int  a,long int  n,long int  u,long int  t)
{
    long int  a1;
    if(n==0 or n==1)
    {
        return 3;
    }
    if(n==2 || n==3)
    {
        return 0;
    }
    a1=EXPOMR(a, u, n);
    if(a1==1 or a1==n-1)
    {
        return 0;
    }
    for(int64_t i=1;i<t;i++)
    {
        a1=(a1*a1)%n;
        if(a1==n-1)
        {
            return 0;
        }
    }
    
    return 1;
}

bool MillerRabin(long int  n,int s)
{
    if(n==0 or n==1)
    {
        return 3;
    }
    if(n>=2 and n<4)
    {
        return 1;
    }
    long int  u,t,a=0;
    EnemenosUNo(n, &u, &t);
    for(int j=1;j<s;j++)
    {
        if(n>4)
        {
            a=2 + rand() % (n-3);
        }
        if(Es_Compuesto(a, n, u, t))
        {
            return 0;
        }
    }
    return 1;
}


void NCifras()
{
    int n;
    
    cout<<"-------PRIMOS N CIFRAS-------"<<endl;
    cout<<"Cifra: ";cin>>n;
    int aux=pow(10,n-1);
    int aux2=pow(10,n);
    for(int i=aux;i<aux2-1;i++)
    {
        if(MillerRabin(i, 1))
        {
            cout<<"Primo: "<<i<<endl;
        }
    }
    cout<<endl<<"----------------------------"<<endl;
        
    Menu();
}

