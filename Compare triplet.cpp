int a_score=0;
    int b_score=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            a_score++;
        } else if(a[i]<b[i]){
            b_score++;
        }
    }return {a_score,b_score};
}
