char    *ft_strcpy(char *dest, char *src);

int main(){
    char dest[50];
    char dest2[5];
    char src[10] = "012345678";
    char *ret;
    ret = ft_strcpy(dest, src);
    if (ret != dest)
        printf("ERROR. Dest y return no son iguales\n");
    printf("He intentado copiar %s. He conseguido hacer: %s\n", src, dest);
    ret = ft_strcpy(dest2, src);
    if(dest[4] != '4')
        printf("ERROR. (Posible error)No hay que completar con \\0 \n");
    printf("He intentado copiar %s. He conseguido hacer: %s\n", src, dest);
    return 0;
}