#include <iostream>

using namespace std;

void printnumber(int x)
{
    cout<< x << endl;
}

void imprimirDigitos(int num)
{
    int a,b,c,d,e;
    a=num/10000;
    b=(num-a*10000)/1000;
    c=(num-(a*10000+b*1000))/100;
    d=(num-(a*10000+b*1000+c*100))/10;
    e=num%10;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << e << '\t';
}

int contarDigitos (int num1)
{
    int p=1,i,r;

    for (i=0; num1/i>=0 ; i+10);
    {
        if (num1/i>=0)
        p++;

    }
}

int esPalindrome (int num2)
{
    int a,b,c,d,e;
        a=num2/10000;
        b=(num2-a*10000)/1000;
        c=(num2-(a*10000+b*1000))/100;
        d=(num2-(a*10000+b*1000+c*100))/10;
        e=num2%10;
        if (a == e && b == d)
        {
            cout << "es palindrome"<< endl;
        }
        else
            cout <<"no es palidrome"<<endl;
}

void esNumero(char z)
{

    cout << "ingresa el character"<< endl;
    cin >> z;
    if (z > 47 && z <= 57)
    {
        cout << "es un numero"<<endl;
    }
    else
        cout << "no es un numero" << endl;
}


int main()
{
    printnumber(10);






    int num;
    cout << "ingresa el numero de 5 digitos"<< endl;
    cin >> num;


    imprimirDigitos(num);
    cout << endl;

    int num2;
    cout <<"ingresa el numero palindrome" << endl;
    cin >> num2;
    esPalindrome(num2);

    char z;
    esNumero(z);



    {
        int num1,p=1,i,r;
        cout<<"ingresa el numero"<<endl;
        cin>>num1;
        for ( i=1;num1/i>=10;i=i*10 );
        {
            p=p+1;

            cout<< " tiene "<<p<<" digitos "<<endl;
        }
        cout<< " tiene "<<p<<" digitos "<<endl;
    }
}
//FIBONACCI


