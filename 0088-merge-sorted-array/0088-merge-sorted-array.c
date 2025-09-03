
    void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if (nums1Size == 0) {
        return;
    }
    
    int copia1[nums1Size];
    for (int i = 0; i < m; i++) {
        copia1[i] = nums1[i];
    }

    int ind1 = 0; // índice para copia1 (tamanho m)
    int ind2 = 0; // índice para nums2 (tamanho n)
    int i = 0;    // índice para nums1 (tamanho m + n)

    // Merge enquanto ambos os arrays têm elementos
    while (ind1 < m && ind2 < n) {
        if (copia1[ind1] <= nums2[ind2]) {
            nums1[i] = copia1[ind1];
            ind1++;
        } else {
            nums1[i] = nums2[ind2];
            ind2++;
        }
        i++;
    }

    // Copiar elementos restantes de copia1, se houver
    while (ind1 < m) {
        nums1[i] = copia1[ind1];
        ind1++;
        i++;
    }

    // Copiar elementos restantes de nums2, se houver
    while (ind2 < n) {
        nums1[i] = nums2[ind2];
        ind2++;
        i++;
    }
}
