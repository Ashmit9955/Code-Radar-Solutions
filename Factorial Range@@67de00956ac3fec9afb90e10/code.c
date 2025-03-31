void factorialRange(int n, int m){
    if((n > m) || n<0 || m<0){
        printf("Invalid range");
    }else{
        for(int i=n; i<=m; i++){
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact = fact*j;
        }
        printf("%d\n",fact);
    }
    }
}