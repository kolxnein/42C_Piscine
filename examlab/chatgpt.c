#include <stdlib.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        // Eğer boyut 0 ise, boş bir string döndürün ve hemen çıkın.
        char *empty_str = (char *)malloc(1);
        empty_str[0] = '\0';
        return empty_str;
    }

    // Toplam uzunluğu hesaplamak için bir döngü başlatın
    size_t total_length = 0;
    for (int i = 0; i < size; i++) {
        total_length += strlen(strs[i]);
    }
    // Ayraçların toplam uzunluğunu da ekleyin (sep uzunluğu * (size - 1))
    total_length += strlen(sep) * (size - 1);

    // Bellekte yeni string için yer ayırın
    char *result = (char *)malloc(total_length + 1); // +1 for the null terminator
    if (result == NULL) {
        return NULL; // Bellek yetersizse NULL döndürün.
    }

    // Stringleri birleştirme işlemi
    result[0] = '\0'; // Sonuç stringi başlangıçta boş olsun
    for (int i = 0; i < size; i++) {
        strcat(result, strs[i]); // strs[i] stringini sonuç stringine ekle
        if (i < size - 1) {
            strcat(result, sep); // Sonra sep stringini ekleyin (sondan bir öncekine kadar)
        }
    }

    return result;
}

#include <stdio.h>

int main() {
    char *strs[] = {"Hello", "world", "from", "ft_strjoin"};
    char *sep = " ";

    int size = sizeof(strs) / sizeof(strs[0]);

    char *result = ft_strjoin(size, strs, sep);

    if (result != NULL) {
        printf("Birleştirilmiş string: %s\n", result);

        // Bellekten ayrılan alanı temizlemeyi unutmayın
        free(result);
    } else {
        printf("Bellek yetersiz. ft_strjoin fonksiyonundan NULL döndü.\n");
    }

    return 0;
}
