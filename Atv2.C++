#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    float n1, n2, n3;
    float media;
    cin>>n1;
    cin>>n2; 
    cin>>n3;
    media=((n1*2)+(n2*3)+(n3*5))/10;
    cout<<fixed<<setprecision(1)<<"Media final: "<<media;
    return 0;
}


//Faça um algoritmo que leia as 3 notas de um aluno, calcule e imprima a média final deste aluno. 
//Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5, respectivamente.