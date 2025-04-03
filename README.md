# 🖨️ ft_printf

O **ft_printf** é uma implementação personalizada da função `printf` da biblioteca padrão do C. O objetivo do projeto é recriar essa função com suporte para múltiplos formatos de saída, sem o uso da biblioteca `stdio.h`.

---

## 📌 Índice

- [Objetivo do Projeto](#-objetivo-do-projeto)
- [Funcionalidades](#-funcionalidades)
- [Especificações](#-especificações)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)
- [Instalação](#-instalação)
- [Como Usar](#-como-usar)
- [Testes](#-testes)
- [Contato](#-contato)

---

## 🎯 Objetivo do Projeto

O projeto **ft_printf** tem como objetivo recriar a função `printf`, garantindo compatibilidade com diferentes especificadores de formato e um comportamento semelhante ao da função original, mas sem o uso da biblioteca `stdio.h`.

**Destaques:**
- ✅ Implementação manual da saída formatada
- ✅ Suporte para diferentes especificadores
- ✅ Desenvolvimento em C puro

---

## 🔧 Funcionalidades

O `ft_printf` suporta os seguintes formatos:

| Especificador | Descrição |
|--------------|-------------|
| **%c** | Imprime um caractere |
| **%s** | Imprime uma string |
| **%p** | Imprime um ponteiro |
| **%d** | Imprime um número decimal (inteiro) |
| **%i** | Imprime um número inteiro |
| **%u** | Imprime um número decimal sem sinal |
| **%x** | Imprime um número hexadecimal minúsculo |
| **%X** | Imprime um número hexadecimal maiúsculo |
| **%%** | Imprime o caractere `%` |

---

## 📜 Especificações

- A função deve reproduzir o comportamento da `printf`, mas sem usar `printf`, `sprintf` ou outras funções similares da biblioteca padrão.
- O `ft_printf` deve ser capaz de lidar com buffers de saída corretamente, garantindo desempenho otimizado.
- A função retorna o número de caracteres impressos.

---

## 🛠 Tecnologias Utilizadas

- **Linguagem:** C  
- **Compilador:** `cc` (ou GCC, Clang)  
- **Paradigma:** Programação estruturada  
- **Sistema Operacional:** Linux, macOS  

---

## 🛠 Instalação

### 🔹 Passo 1: Clonar o repositório
```sh
git clone https://github.com/seu-usuario/ft_printf.git
```

### 🔹 Passo 2: Compilar o projeto
```sh
cd ft_printf
make
```

---

## 🚀 Como Usar

Para utilizar a função `ft_printf` em seu código, inclua o cabeçalho e compile junto com seu projeto:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Olá, %s! Você tem %d anos.\n", "João", 25);
    return 0;
}
```

Para compilar e executar:
```sh
gcc main.c libftprintf.a -o printf_tester
./printf_tester
```

---

## 🧪 Testes

Para testar a implementação, utilize os arquivos de teste incluídos no repositório ou ferramentas externas como o `printfTester` e `42TESTERS-PRINTF`.

Exemplo:
```sh
git clone https://github.com/Tripouille/printfTester.git
cd printfTester
make f && ./run_test
```

---

## 📩 Contato

Se tiver alguma dúvida ou sugestão, entre em contato:
📧 **E-mail:** [asilvaperoba@gmail.com](mailto:asilvaperoba@gmail.com)

