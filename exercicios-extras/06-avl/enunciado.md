# Problema: Implementação de Árvore AVL em C

## Objetivo:

O objetivo deste trabalho é implementar uma Árvore AVL (Adelson-Velsky e Landis), uma árvore de busca binária auto-balanceável. Você deverá implementar as operações de inserção e remoção, garantindo que a propriedade de balanceamento da árvore seja mantida a todo momento através de rotações simples e duplas.

## Estrutura de Dados:

Primeiramente, defina a estrutura do nó da árvore. Recomenda-se a seguinte estrutura em C:

```c
typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
} Node;
```

## Parte 1: Funções Auxiliares

Implemente as seguintes funções de base que serão utilizadas nas operações principais da árvore.

`int height(Node *node);`

Descrição: Retorna a altura de um nó. Por convenção, a altura de um nó NULL é 0. A altura de um nó folha é 1.

`int max(int a, int b);`

Descrição: Função utilitária que retorna o maior valor entre dois inteiros.

`Node *newNode(int key);`

Descrição: Aloca memória para um novo nó, inicializa seu valor com a key fornecida, define sua altura inicial como 1 e seus filhos (left e right) como NULL.

`int getBalance(Node *node);`

Descrição: Calcula e retorna o fator de balanceamento de um nó. O fator de balanceamento é definido como height(node->left) - height(node->right). Se o nó for NULL, o fator é 0.

## Parte 2: Rotações

As rotações são as operações fundamentais para manter o balanceamento da árvore.

`Node *rightRotation(Node *y);`

Descrição: Realiza uma rotação simples para a direita na sub-árvore com raiz y. Após a rotação, as alturas dos nós afetados (y e sua nova raiz) devem ser recalculadas e atualizadas.

`Node *leftRotation(Node *x);`

Descrição: Realiza uma rotação simples para a esquerda na sub-árvore com raiz x. As alturas dos nós afetados devem ser recalculadas e atualizadas após a operação.

## Parte 3: Inserção

Implemente a função de inserção que mantém a árvore balanceada.

Assinatura da Função:

```c
Node *insert(Node *node, int key);
```

Com certeza! O seu esboço já é muito bom e cobre todos os pontos essenciais. Para melhorá-lo, podemos focar em:

    Estrutura e Clareza: Organizar o enunciado de forma mais didática, como um documento de especificação.

    Formalidade: Usar uma linguagem um pouco mais formal e precisa, típica de enunciados de problemas acadêmicos ou técnicos.

    Contextualização: Adicionar uma breve introdução sobre o objetivo do problema.

    Detalhes Técnicos: Explicar com mais precisão os casos de rebalanceamento.

    Formatação: Utilizar Markdown para destacar títulos, código e listas, tornando a leitura mais agradável.

Abaixo está uma versão aprimorada do seu enunciado.

Problema: Implementação de Árvore AVL em C

Objetivo:

O objetivo deste trabalho é implementar uma Árvore AVL (Adelson-Velsky e Landis), uma árvore de busca binária auto-balanceável. Você deverá implementar as operações de inserção e remoção, garantindo que a propriedade de balanceamento da árvore seja mantida a todo momento através de rotações simples e duplas.

Estrutura de Dados:

Primeiramente, defina a estrutura do nó da árvore. Recomenda-se a seguinte estrutura em C:
C

typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

Parte 1: Funções Auxiliares

Implemente as seguintes funções de base que serão utilizadas nas operações principais da árvore.

    int height(Node *node);

        Descrição: Retorna a altura de um nó. Por convenção, a altura de um nó NULL é 0. A altura de um nó folha é 1.

    int max(int a, int b);

        Descrição: Função utilitária que retorna o maior valor entre dois inteiros.

    Node *newNode(int key);

        Descrição: Aloca memória para um novo nó, inicializa seu valor com a key fornecida, define sua altura inicial como 1 e seus filhos (left e right) como NULL.

    int getBalance(Node *node);

        Descrição: Calcula e retorna o fator de balanceamento de um nó. O fator de balanceamento é definido como height(node->left) - height(node->right). Se o nó for NULL, o fator é 0.

Parte 2: Rotações

As rotações são as operações fundamentais para manter o balanceamento da árvore.

    Node *rightRotation(Node *y);

        Descrição: Realiza uma rotação simples para a direita na sub-árvore com raiz y. Após a rotação, as alturas dos nós afetados (y e sua nova raiz) devem ser recalculadas e atualizadas.

    Node *leftRotation(Node *x);

        Descrição: Realiza uma rotação simples para a esquerda na sub-árvore com raiz x. As alturas dos nós afetados devem ser recalculadas e atualizadas após a operação.

## Parte 3: Inserção

Implemente a função de inserção que mantém a árvore balanceada.

Assinatura da Função:

`Node *insert(Node *node, int key);`

### Lógica de Implementação:

1. Execute uma inserção padrão de Árvore de Busca Binária (BST).
2. Após a inserção, suba recursivamente na árvore (durante o retorno da recursão) e atualize a altura de cada nó ancestral.
3. Para cada ancestral, calcule o seu fator de balanceamento.
4. Se um nó se tornar desbalanceado, identifique qual dos quatro casos abaixo ocorreu e aplique a rotação correspondente para corrigi-lo.

### Casos de Rebalanceamento (após inserção):
Seja z o primeiro nó desbalanceado encontrado subindo a partir do nó inserido.

1. Caso Esquerda-Esquerda (Left-Left): O fator de balanceamento de z é > 1 e a chave inserida é menor que a chave do filho esquerdo de z.
    - Solução: Uma única Rotação à Direita em z.
2. Caso Direita-Direita (Right-Right): O fator de balanceamento de z é < -1 e a chave inserida é maior que a chave do filho direito de z.
    - Solução: Uma única Rotação à Esquerda em z.
3. Caso Esquerda-Direita (Left-Right): O fator de balanceamento de z é > 1 e a chave inserida é maior que a chave do filho esquerdo de z.
    - Solução: Uma Rotação à Esquerda no filho esquerdo de z, seguida por uma Rotação à Direita em z.
4. Caso Direita-Esquerda (Right-Left): O fator de balanceamento de z é < -1 e a chave inserida é menor que a chave do filho direito de z.
    - Solução: Uma Rotação à Direita no filho direito de z, seguida por uma Rotação à Esquerda em z.

## Parte 4: Remoção

A remoção também deve garantir que a árvore permaneça balanceada.

Função Auxiliar para Remoção:

`Node *minValueNode(Node *node);`

Descrição: Encontra e retorna o nó com o menor valor (sucessor em-ordem) em uma sub-árvore. Este nó é o elemento mais à esquerda na sub-árvore.

Assinatura da Função de Remoção:

`Node *deleteNode(Node *root, int key);`

### Lógica de Implementação:

1. Execute uma remoção padrão de Árvore de Busca Binária (BST).
2. Assim como na inserção, após a remoção, suba recursivamente na árvore atualizando as alturas dos nós ancestrais.
3. Para cada ancestral, verifique o fator de balanceamento e, se necessário, aplique a mesma lógica de rebalanceamento e os quatro casos de rotação descritos na seção de inserção.

## Parte 5: Programa Principal e Testes

Crie uma função main em um arquivo separado (ex: main.c) para testar rigorosamente a sua implementação. É altamente recomendável criar uma função de impressão (ex: preOrder ou uma função de impressão 2D) para visualizar a estrutura da árvore após cada operação e facilitar a depuração.

### Cenários de Teste Obrigatórios:

1. Rotação Simples: Insira uma sequência que force uma rotação simples à esquerda (ex: 10, 20, 30) e verifique a estrutura. Faça o mesmo para uma rotação à direita (ex: 30, 20, 10).
2. Rotação Dupla: Insira uma sequência que force uma rotação Esquerda-Direita (ex: 30, 10, 20) e uma Direita-Esquerda (ex: 10, 30, 20). Verifique a estrutura em cada caso.
3. Operações Mistas: Construa uma árvore com vários elementos (ex: 9, 5, 10, 0, 6, 11, -1, 1, 2).
4. Remoção de Folha: Remova um nó folha (ex: 2) e verifique se a árvore continua balanceada.
5. Remoção com Um Filho: Remova um nó com apenas um filho (ex: 6) e verifique a estrutura.
6. Remoção com Dois Filhos: Remova um nó com dois filhos (ex: 10) e verifique a estrutura.
7. Remoção com Rebalanceamento: Crie um cenário onde a remoção de um nó cause desbalanceamento e exija uma ou mais rotações para corrigir a árvore.

### Critérios de Avaliação:
- Corretude: Todas as operações (inserção, remoção) devem funcionar corretamente e manter a propriedade de balanceamento da AVL.
- Gerenciamento de Memória: O código não deve apresentar vazamentos de memória (memory leaks). Lembre-se de liberar a memória dos nós removidos.
- Clareza e Organização: O código deve ser legível, bem comentado e modular.