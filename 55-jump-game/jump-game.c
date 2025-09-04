bool canJump(int* nums, int numsSize) {
//va percorrendo o array e guardadno com a posição maxima que voce consegue chegar ate o momento
//se voce uma hora chegar em uma posição i > que alcance max retorne false, e va sempre atualizando o
//alcance maximo e se uma hora ele for maior igual a posicao final entao retorne verdadeiro

//função auxiliar
int max(int a, int b) {
    return (a > b) ? a : b;
}


int alcanceMax = nums[0];
for(int i = 1; i < numsSize; i++){
    if(i>alcanceMax){
        return false;
    }
    alcanceMax = max(alcanceMax, i + nums[i]);
}

if(alcanceMax>=numsSize - 1){
    return true;
}else{
    return false;
}
}