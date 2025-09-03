void rotate(int* nums, int numsSize, int k) {
    if (numsSize == 0) return;
    
    // Ajusta k caso seja maior que o tamanho do array
    k = k % numsSize;
    if (k == 0) return;
    
    // Aloca memória para guardar os últimos k elementos
    int* temp = (int*)malloc(k * sizeof(int));
    
    // Copia os últimos k elementos para o vetor temporário
    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }
    
    // Desloca os elementos restantes para a direita
    for (int i = numsSize - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }
    
    // Coloca os elementos guardados no início do array
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
    
    free(temp);
}