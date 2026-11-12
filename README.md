# Estrutura de Dados I — Lista 08

Coleção de exercícios de algoritmos clássicos sobre **listas simplesmente encadeadas**, desenvolvida em C++20 na disciplina Estrutura de Dados I.

Os exercícios são compilados em alvos independentes, facilitando a execução e o estudo de cada problema.

## Exercícios

| Arquivo | Problema |
|---|---|
| `Exer01_MiddleNode.cpp` | Encontrar o nó central da lista |
| `Exer02_PalindromeList.cpp` | Verificar se a sequência forma um palíndromo |
| `Exer03_RemoveDuplicates.cpp` | Remover duplicatas de uma lista ordenada |
| `Exer04_OddEvenList.cpp` | Agrupar nós por posições ímpares e pares |
| `Exer05_AddTwoNumbers.cpp` | Somar números representados por listas de dígitos |

O exercício de palíndromo restaura a segunda metade da lista após a comparação. O exercício de soma trabalha com o transporte (`carry`) entre as casas numéricas.

## Organização

```text
.
├── include/
│   ├── List.h
│   └── LinkedList.h
├── src/
│   ├── Exer01_MiddleNode.cpp
│   ├── Exer02_PalindromeList.cpp
│   ├── Exer03_RemoveDuplicates.cpp
│   ├── Exer04_OddEvenList.cpp
│   └── Exer05_AddTwoNumbers.cpp
├── CMakeLists.txt
└── README.md
```

A estrutura auxiliar `Node<T>` é definida em `include/LinkedList.h` e utilizada pelos exercícios.

## Tecnologias e conceitos

- C++20
- Templates e estruturas encadeadas
- Ponteiros e manipulação de nós
- Percurso, reorganização e comparação de listas
- CMake e CLion

## Compilação

Com CMake e um compilador compatível com C++20 instalados:

```powershell
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
```

O projeto define os alvos `exercicio01` a `exercicio05`. Para executar um exercício no Windows, por exemplo:

```powershell
.\build\Debug\exercicio01.exe
```

No CLion, abra a pasta do projeto e selecione o alvo desejado no perfil Debug.

## Objetivo de aprendizagem

Explorar estratégias de manipulação de listas, análise de casos de borda e resolução de problemas clássicos com estruturas dinâmicas.

## Contexto acadêmico

Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) — Instituto Federal do Triângulo Mineiro (IFTM).
