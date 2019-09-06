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
    int p,i;
    p=1;
    for (i=0; num1%10>=0 ; i+10);
    {
        p++;
    }
}

bool esPalindrome (int num2)
{
    int a,b,c,d,e;
        a=num2/10000;
        b=(num2-a*10000)/1000;
        c=(num2-(a*10000+b*1000))/100;
        d=(num2-(a*10000+b*1000+c*100))/10;
        e=num2%10;
        if (a == d && b == e)
        {
            cout << "es palindrome"<< endl;
        }
        else
            cout <<"no es palidrome"<<endl;
}

bool esNumero(char z)
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

    int num1;
    cout << "ingresa el numero de 5 digitos"<<endl;
    cin>>num1;
    contarDigitos(num1);
    cout << "son" << num1 << "digitos" << endl;
}



