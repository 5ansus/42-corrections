char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(){
    char dest[50];
    char dest2[5];
    char src[10] = "123456789";
    char *ret;
    dest[49] = '\0';
    ret = ft_strcpy(dest, src, 2);
    if (ret != dest)
        printf("ERROR. Dest y return no son iguales\n");
    if(dest[48] != '\0')
        printf("ERROR. No se ha completado con \\0");
    printf("He intentado copiar %s. He conseguido hacer: %s\n", src, dest);
    ret = ft_strcpy(dest2, src, 2);
    if (ret != dest)
        printf("ERROR. Dest2 y return no son iguales\n");
    if(dest[4] != '4')
        printf("ERROR. (Posible error)No hay que completar con \\0 \n");
    printf("He intentado copiar %s. He conseguido hacer: %s\n", src, dest);
    return 0;
}