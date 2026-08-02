bool stoneGame(int* piles, int pilesSize) {
   int a =0;
   int b = 0;

   while(pilesSize != 0){
    if(piles[0] >= piles[pilesSize-1]){
        a += piles[0];
        
    }else{
        a += piles[pilesSize-1];
    }

    pilesSize--;
   }

   return true;
}