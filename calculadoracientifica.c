#include <stdio.h>
#include <math.h>


// Função para adição
double adicao(double a, double b) {
    return a + b;
}

// Função para subtração
double subtracao(double a, double b) {
    return a - b;
}

// Função para multiplicação
double multiplicacao(double a, double b) {
    return a * b;
}

// Função para divisão
double divisao(double a, double b) {
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        return NAN; // Retorna NaN (Not a Number)
    }
    return a / b;
}

// Função para exponenciação
double exponenciacao(double base, double expoente) {
    return pow(base, expoente);
}

// Função para raiz quadrada
double raiz_quadrada(double a) {
    if (a < 0) {
        printf("Erro: Nao e possivel calcular a raiz quadrada de um numero negativo!\n");
        return NAN; // Retorna NaN (Not a Number)
    }
    return sqrt(a);
}

int main() {
    char operador;
    double num1, num2, resultado;

    printf("Calculadora Cientifica\n");
    printf("Operacoes disponiveis: +, -, *, /, ^ (exponenciacao), sqrt (raiz quadrada)\n");

    // Solicitar operação ao usuário
    printf("Digite a operacao (por exemplo, 5 + 3): ");
    scanf("%lf %c %lf", &num1, &operador, &num2);

    // Realizar operação e exibir resultado
    switch (operador) {
        case '+':
            resultado = adicao(num1, num2);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            break;
        case '/':
            resultado = divisao(num1, num2);
            break;
        case '^':
            resultado = exponenciacao(num1, num2);
            break;
        case 's':
            if (num2 != 0) {
                printf("Erro: A operacao 'sqrt' nao aceita dois numeros.\n");
                return 1;
            }
            resultado = raiz_quadrada(num1);
            break;
        default:
            printf("Operador invalido!\n");
            return 1;
    }

    // Exibir o resultado
    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
