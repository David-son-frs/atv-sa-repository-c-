#include <iostream>
using namespace std;

int main() {
    double valorhora, horastrabalhadas, salariobruto, ir, inss, fgts, salarioliquido, totaldescontos;

    cout << "Digite o valor da hora: ";
    cin >> valorhora;
    cout << "Digite a quantidade de horas trabalhadas no mes: ";
    cin >> horastrabalhadas;

    salariobruto = valorhora * horastrabalhadas;
    inss = salariobruto * 0.10;
    fgts = salariobruto * 0.11;

    if (salariobruto <= 900) {
        ir = 0;
    } else if (salariobruto <= 1500) {
        ir = salariobruto * 0.05;
    } else if (salariobruto <= 2500) {
        ir = salariobruto * 0.10;
    } else {
        ir = salariobruto * 0.20;
    }

    totaldescontos = ir + inss;
    salarioliquido = salariobruto - totaldescontos;

    cout << "Salario Bruto: (R$ " << salariobruto << ") ";
    cout << "(-) IR: R$ " << ir << " ";
    cout << "(-) INSS: R$ " << inss << " ";
    cout << "FGTS: R$ " << fgts << " ";
    cout << "Total de descontos: R$ " << totaldescontos << " ";
    cout << "Salario Liquido: R$ " << salarioliquido;

    return 0;
}
