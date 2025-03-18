#include <stdio.h>
#include <string.h>

//Ex. 1 Fatorial
//int fatorial (int n) {
//	if (n == 0 || n == 1) {
//		return 1;
//	}
//	return n * fatorial(n - 1);
//}
//
//int main () {
//	int num;
//	printf("Digite um número para calcular o fatorial: ");
//	scanf ("%d", &num);
//	
//	if (num < 0) {
//		printf("O fatorial não é definido para números negativos.\n");
//	} else {
//		printf("Fatorial de %d é %d\n", num, fatorial(num));
//	}
//	return 0;
//}


//Ex. 2 Soma de números naturais
//int soma_numeros_naturais(int n) {
//
//    if (n == 1) {
//        return 1;
//    } else {
//        return n + soma_numeros_naturais(n - 1);
//    }
//}
//
//int main() {
//    int n;
//
//    printf("Digite um número natural: ");
//    scanf("%d", &n);
//    printf("A soma dos primeiros %d números naturais é: %d\n", n, soma_numeros_naturais(n));
//    return 0;
//}


//Ex. 3 Sequência de Fibonacci 
//int fibonacci(int n) {
//    if (n == 0) {
//        return 0;
//    } else if (n == 1) {
//        return 1;
//    } else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//}
//
//int main() {
//    int n;
//
//    printf("Digite um número para obter o n-ésimo termo da sequência de Fibonacci: ");
//    scanf("%d", &n);
//    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
//    return 0;
//}


//Ex. 4 Potência 
//int potencia(int x, int n) {
//
//    if (n == 0) {
//        return 1;
//    }
//    if (n % 2 == 0) {
//        int half = potencia(x, n / 2);
//        return half * half;
//    } else {
//        return x * potencia(x, n - 1);
//    }
//}
//
//int main() {
//    int x, n;
//
//    printf("Digite o valor de x (base): ");
//    scanf("%d", &x);
//    printf("Digite o valor de n (expoente): ");
//    scanf("%d", &n);
//
//    printf("%d elevado a %d é: %d\n", x, n, potencia(x, n));
//
//    return 0;
//}


//Ex. 5 Contagem regressiva
//void contagem_regressiva(int n) {
//    if (n >= 0) {
//        printf("%d ", n);
//        contagem_regressiva(n - 1);
//    }
//}
//
//int main() {
//    int n;
//    printf("Digite um número: ");
//    scanf("%d", &n);
//    contagem_regressiva(n);
//    printf("\n");
//    return 0;
//}


//Ex. 6 Soma de digitos
//int soma_digitos(int n) {
//    if (n == 0) {
//        return 0;
//    }
//    return (n % 10) + soma_digitos(n / 10);
//}
//
//int main() {
//    int n;
//    printf("Digite um número inteiro positivo: ");
//    scanf("%d", &n);
//    printf("Soma dos dígitos: %d\n", soma_digitos(n));
//    return 0;
//}


//Ex. 7 Iversão de string
//void inverteStringRecursiva(char *str, int inicio, int fim) {
//    if (inicio >= fim) {
//        return;
//    }
//    char temp = str[inicio];
//    str[inicio] = str[fim];
//    str[fim] = temp;
//    inverteStringRecursiva(str, inicio + 1, fim - 1);
//}
//
//void inverteString(char *str) {
//    int tamanho = strlen(str);
//    inverteStringRecursiva(str, 0, tamanho - 1);
//}
//
//int main() {
//    char str[] = "recursão";
//    
//    printf("String original: %s\n", str);
//    inverteString(str);
//    printf("String invertida: %s\n", str);
//
//    return 0;
//}


//Ex. 8 Verificação de palíndromo
//int verificaPalindromoRecursivo(const char *str, int inicio, int fim) {
//    if (inicio >= fim) {
//        return 1;
//    }
//    if (str[inicio] != str[fim]) {
//        return 0;
//    }
//    return verificaPalindromoRecursivo(str, inicio + 1, fim - 1);
//}
//
//int verificaPalindromo(const char *str) {
//    return verificaPalindromoRecursivo(str, 0, strlen(str) - 1);
//}
//
//int main() {
//    const char *str1 = "arara";
//    const char *str2 = "casa";
//
//    printf("'%s' e um palindromo? %d\n", str1, verificaPalindromo(str1));
//    printf("'%s' e um palindromo? %d\n", str2, verificaPalindromo(str2));
//
//    return 0;
//}


//Ex. 9 Máximo divisor comum (MDC)
//int mdc(int a, int b) {
//    if (b == 0) {
//        return a;
//    }
//    return mdc(b, a % b);
//}
//
//int main() {
//    int a, b;
//    printf("Digite dois números inteiros: ");
//    scanf("%d %d", &a, &b);
//    
//    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
//    
//    return 0;
//}


//Ex. 10 Multiplicação recursiva
//int multiplicar(int a, int b) {
//    if (b == 0) {
//        return 0;
//    }
//    return a + multiplicar(a, b - 1);
//}
//
//int main() {
//    int a, b;
//    printf("Digite dois números inteiros não negativos: ");
//    scanf("%d %d", &a, &b);
//    
//    printf("%d * %d = %d\n", a, b, multiplicar(a, b));
//    
//    return 0;
//}

//Ex. 11 Contagem de caracteres
//int contarCaracterRecursivo(const char *str, char caractere) {
//    if (*str == '\0') {
//        return 0;
//    }
//    int contadorAtual = (*str == caractere) ? 1 : 0;
//    return contadorAtual + contarCaracterRecursivo(str + 1, caractere);
//}
//
//int main() {
//    const char *texto = "abracadabra";
//    char caractere = 'a';
//    int quantidade = contarCaracterRecursivo(texto, caractere);
//
//    printf("O caractere '%c' aparece %d vezes na string \"%s\".\n", caractere, quantidade, texto);
//
//    return 0;
//}

//Ex. 12 Soma de elementos de um array
//int soma_array(int arr[], int tamanho) {
//    if (tamanho == 0) {
//        return 0;
//    }
//    return arr[tamanho - 1] + soma_array(arr, tamanho - 1);
//}
//
//int main() {
//    int n;
//    printf("Digite o tamanho do array: ");
//    scanf("%d", &n);
//    
//    int arr[n];
//    printf("Digite %d elementos: ", n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    
//    printf("Soma dos elementos: %d\n", soma_array(arr, n));
//    
//    return 0;
//}


//Ex. 13 Verificação de número primo
//#include <math.h>
//
//int verificarPrimoRecursivo(int n, int divisor) {
//    if (n <= 1) {
//        return 0;
//    }
//    if (divisor > sqrt(n)) {
//        return 1;
//    }
//    if (n % divisor == 0) {
//        return 0;
//    }
//    return verificarPrimoRecursivo(n, divisor + 1);
//}
//
//int ePrimo(int n) {
//    return verificarPrimoRecursivo(n, 2);
//}
//
//int main() {
//    int numero = 7;
//    printf("O número %d é primo? %d\n", numero, ePrimo(numero));
//
//    numero = 9;
//    printf("O número %d é primo? %d\n", numero, ePrimo(numero));
//
//    return 0;
//}

//Ex. 14 Conversão de decimal para binário
//void decimal_para_binario(int n) {
//    if (n == 0) {
//        return; 
//    }
//    decimal_para_binario(n / 2);
//    printf("%d", n % 2);
//}
//
//int main() {
//    int num;
//    printf("Digite um número decimal: ");
//    scanf("%d", &num);
//    
//    if (num == 0) {
//        printf("0");
//    } else {
//        decimal_para_binario(num);
//    }
//    printf("\n");
//    
//    return 0;
//}


//Ex. 15 Impressão de números pares
//void imprimir_pares(int n, int atual) {
//    if (atual > n) {
//        return;
//    }
//    printf("%d ", atual);
//    imprimir_pares(n, atual + 2);
//}
//
//int main() {
//    int num;
//    printf("Digite um número: ");
//    scanf("%d", &num);
//    
//    imprimir_pares(num, 0);
//    printf("\n");
//    
//    return 0;
//}





