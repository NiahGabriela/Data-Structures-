///Johor && Niah Gabriela
///Stack: array implementation

#include <iostream>
#include <cstdlib>

using namespace std;

class Stack
{
public:
    int pila[10];
    int puntero;
    Stack ()
    {
        puntero=0;
        /*for(int i=0;i<10;i++)
        {
            pila[i]=0;
        }*/
    }
    void push(int valor);
    int pop();
    bool isEmpty();
    bool isFull();
};

void Stack::push (int valor)
{
    if(!isFull())
    {
        cout << sizeof(pila)/sizeof(int) << endl << endl;
        pila[puntero++]=valor;
    }
    else
    {
        cerr << "Esta lleno" << endl;
    }
}

int Stack::pop ()
{
    if(!isEmpty())
    {
        return pila[--puntero];
    }
    else
    {
        return EXIT_FAILURE;
    }
}
bool Stack::isEmpty()
{
    return puntero==0;
}

bool Stack::isFull()
{
    return puntero==(sizeof(pila)/sizeof(int));
}

int main ()
{
    Stack s;
    //int valor=20;
    //s.push(valor);
    //s.push(25);
    //cout << s.pila[0] << endl;
    //cout << s.pop() << endl;
    return 0;
}

