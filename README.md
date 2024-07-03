# QuickSort
Explicação Passo a Passo:
Condição de Parada (if (left < right)):

Esta condição verifica se ainda há mais de um elemento no subarray a ser ordenado. Se left não for menor que right, o subarray contém 0 ou 1 elemento, o que significa que não há necessidade de ordenação adicional.
Escolha do Pivô (int pivot = array[right]):

O pivô é escolhido como o elemento mais à direita do subarray. Isso é uma escolha comum, mas outros métodos de escolha do pivô também podem ser utilizados para otimização.
Inicialização de i (int i = left - 1):

i é inicializado como left - 1 para indicar que inicialmente não há elementos menores que o pivô no subarray. i será usado para rastrear a posição onde os elementos menores que o pivô devem ser colocados.
Iteração pelo Subarray (for (int j = left; j < right; j++)):

O loop for itera pelo subarray da esquerda para a direita, excluindo o pivô (array[right]).
Comparação e Particionamento:

Dentro do loop, cada elemento array[j] é comparado com o pivô (array[right]).
Se array[j] for menor ou igual ao pivô, i é incrementado (i++) para indicar que encontramos um elemento que deve estar à esquerda do pivô.
swap(array, i, j) troca o elemento atual (array[j]) com o próximo elemento que é menor ou igual ao pivô (array[i+1]).
Posicionamento Final do Pivô:

Após o loop, o pivô (array[right]) é colocado na posição correta no array ordenado usando swap(array, i + 1, right). Agora todos os elementos à esquerda de i+1 são menores ou iguais ao pivô, e todos à direita são maiores.
Divisão e Conquista (Recursão):

partitionIndex é definido como i + 1, indicando a posição correta do pivô após o particionamento.
O QuickSort é então chamado recursivamente para ordenar os subarrays à esquerda (quickSort(array, left, partitionIndex - 1)) e à direita (quickSort(array, partitionIndex + 1, right)) do pivô.
Funcionamento Geral:
Divisão e Conquista: O algoritmo QuickSort divide o array em subarrays menores com base no pivô escolhido, particiona esses subarrays e os ordena recursivamente até que todo o array esteja ordenado.
Eficiência: A complexidade média do QuickSort é 
𝑂
(
𝑛
log
⁡
𝑛
)
O(nlogn), o que o torna muito eficiente para grandes conjuntos de dados.
Este algoritmo exemplifica a abordagem clássica do QuickSort e sua implementação em Java, utilizando recursão para dividir o problema em subproblemas menores e resolver cada um deles de forma ordenada.
