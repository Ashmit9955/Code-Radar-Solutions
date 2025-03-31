void factorialRange(int n, int m){
    for(int i=n; i<=m; i++){
        int fact = 1;
        for(int j=1;j<=i;j++){
            fact = fact*j;
        }
        printf("%d\n",fact);
    }
}
int main(){
    return 0;
}