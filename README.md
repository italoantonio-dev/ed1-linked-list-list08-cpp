# Estrutura de Dados I — Lista 08

Exercícios de algoritmos sobre listas encadeadas da disciplina Estrutura de
Dados I.

**Aluno:** Italo Antônio Costa Felisbino  
**Curso:** ADS — IFTM

## Estrutura

Cada exercício possui um executável próprio e usa o `Node<T>` externo definido
em `include/LinkedList.h`.

```text
include/
├── List.h
└── LinkedList.h
src/
├── Exer01_MiddleNode.cpp
├── Exer02_PalindromeList.cpp
├── Exer03_RemoveDuplicates.cpp
├── Exer04_OddEvenList.cpp
└── Exer05_AddTwoNumbers.cpp
CMakeLists.txt
README.md
```

Os exercícios cobrem o nó central, palíndromo com restauração da lista,
remoção de duplicatas ordenadas, agrupamento ímpar/par e soma de listas de
dígitos invertidos com carry.

## Compilação e execução

No CLion, abra a pasta do projeto e execute individualmente os alvos
`exercicio01` a `exercicio05` no perfil Debug.

No terminal:

```powershell
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
.\build\Debug\exercicio01.exe
.\build\Debug\exercicio02.exe
.\build\Debug\exercicio03.exe
.\build\Debug\exercicio04.exe
.\build\Debug\exercicio05.exe
```

Os exercícios que recebem listas leem uma linha de inteiros separados por
espaços; o exercício 05 lê duas linhas. Os PDFs não estavam disponíveis no
workspace para confirmar qualquer detalhe adicional de apresentação.

## Verificação executada

Todos os cinco alvos foram compilados em Debug com C++20 e executados com
exemplos e casos de borda. O palíndromo restaura a segunda metade invertida
antes de retornar, inclusive quando a comparação encontra uma diferença.
