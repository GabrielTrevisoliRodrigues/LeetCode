bool canJump(int* nums, int numsSize) {
    /*variavel principal, se em algum momento o alcance maximo chegar
    ate o fim doarray isso significa que podemos retornar true. Entretanto,
    se mesmo depois de percorrer todo o array com o for o alcance maximo ainda
    nao ser suficiente teremos que retornar false*/
    int alcanceMax = nums[0];

    /*percoremos o array tendo como condicções que para acessar uma casa ela tem 
    que estar dentro do alcance e obviamente dentro das posições possiveis para evitar
    erros de visitar casas nao indexadas*/
    for(int i = 0; i <= alcanceMax && i < numsSize; i++){
        if(nums[i] + i > alcanceMax){
            /*ataualizamos o valor de alcance maximo sempre tendo em mente que a distancia 
            ja percorrida ate a casa em questao ,ou seja, a distancia "i" deve ser considerada,
            pois por exemplo [5,2,2,4,1,2,0,4]:
            aqui começamos com o alcance maximo sendo 5 e ele sera atualizado quando chegarmos 
            na primiera casa de valor 4 mesmo que esse valor seja menor que 5. Isso devido ao falto
            de 4 + 3 (sua posição no array/ distancia ja percorrida) > 5*/
            alcanceMax = nums[i] + i;
        }
    }


    //por fim avalie o resultado
    if(alcanceMax >= numsSize - 1){
        return true;
    } else {
        return false;
    }

    
}