#include <iostream>
#include <math.h>
using namespace std;

int multiplo(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
            c+=i;
    }
    return c;
}

int multiplope(int i)
{
	while (i %  2 != 0 || i %  3 != 0 || i %  4 != 0 || i %  5 != 0 ||
         i %  6 != 0 || i %  7 != 0 || i %  8 != 0 || i %  9 != 0 ||
         i % 10 != 0 || i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
         i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||
         i % 18 != 0 || i % 19 != 0 || i % 20 != 0 ){
    i++;
	}
}

int sumacuadrado(int n)
{
	int s,aux=0;
	for(int i=1;i<=n;i++)
	{
		s=pow(i,2);
		aux+=s;
	}
	int s1,aux1=0;
	for(int j=1;j<=n;j++)
	{
		aux1+=j;
	}
	s1=pow(aux1,2);
	int resta;
	resta=s1-aux;
	return resta;
}
int invertir(int num)
 {
    int resto,numinver=0;
    if(num>=10)
    {
        while(num>0)
        {
            resto=num%10;
            num/=10;
            numinver*=10+resto;
        }
     }
     return numinver;

}
int sumprimo(int tam)
{
    int s=0;
    for(int i=1;i<tam;i++)
    {
        int contador=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
               contador++;
            }
        }
        if (contador==2)
        {
            s+=i;
        }
    }
    return s;
}
int factorprimo(int n)
{
    for(int i=n;i>=0;i--)
    {
        int contador;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                contador++;
            }
        }
        if(contador==2)
        {
            cout<<i;
            break;
        }
    }
}
void  pitagora(int n)
{
    int aux=n;
    int a,b,c;
    for(int i=1;i<=n;i++)
    {
        c=i;
        b=aux-c;
        a=b-c;
        if(a<b<c){
            int suma=a,b,c;
            int producto=1;
            if(suma==1000){
                producto*=a*b*c;
                break;
            }
            cout<<producto<<" ";
        }
    }
}
int main()
{
	int n;
	int aux=999;
	while(aux<1000 && aux>900)
    {
        for(int i=999;i<1000 && i>900;i--){
            n=aux*i;
            if(n==invertir(n))
            {
                cout<<n<<endl;
                break;
            }
        }
    aux--;
    }
    pitagora(1000);

}
