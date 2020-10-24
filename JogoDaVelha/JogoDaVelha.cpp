#include <iostream>
#include <sstream>

using namespace std;

int main(void){

    int i, j;
    int l = 0;
    int op = 1;
    int k = 1;
    string espaco;
    bool vencedor = false;
    string vez = "o";
    string jogo [3][3];

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        std::ostringstream c;
        c << k;
        jogo [i][j] = c.str();
            if(j == 2)
            {
                cout << " " << jogo[i][j];
            }
            else
            {
                cout << " " << jogo[i][j] << "  | ";
            }  
         k++;
    }
    cout << endl;
    if(i < 2)
    {
        cout << "____|_____|_____" << endl;
    }
    else
    {
        cout << "    |     |     " << endl;
    } 
}

while(l < 9 && vencedor == false)
{
    cout << "Agora e a vez de " << vez << endl;
    cout << "Qual espaco vc quer preencher? ";
    cin >> espaco;

    if(op > 0)
    {
        vez = "x";
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                if(espaco == jogo[i][j])
                  jogo[i][j] = "o";
            }
        }
    }
    else
    {
        vez = "o";
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                if(espaco == jogo[i][j])
                    jogo[i][j] = "x";
            }
        }
    }
    op*=-1;
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == 2)
            {
                cout << " " << jogo[i][j];
            }
            else
            {
                cout << " " << jogo[i][j] << "  | ";
            }   
        }
        cout << endl;
        if(i < 2)
        {
            cout << "____|_____|_____" << endl;
        }
        else
        {
            cout << "    |     |     " << endl;
        }  
    }

    for(i = 0; i < 3; i++)
    {
        if(jogo[i][0] == jogo[i][1] && jogo[i][0] == jogo[i][2])
        {
            cout << jogo[i][0] << " Venceu!!!" << endl;
            vencedor = true;
        }
            
        if(jogo[0][i] == jogo[1][i] && jogo[0][i] == jogo[2][i])
        {
            cout << jogo[0][i] << " Venceu!!!" << endl;
            vencedor = true;
        }
    }

    if(jogo[0][0] == jogo[1][1] && jogo[0][0] == jogo[2][2])
    {
        cout << jogo[0][0] << " Venceu!!!" << endl;
        vencedor = true;
    }

    if(jogo[0][2] == jogo[2][2] && jogo[0][2] == jogo[2][0])
    {
        cout << jogo[0][2] << " Venceu!!!" << endl;
        vencedor = true;
    }

    l++;
}
}