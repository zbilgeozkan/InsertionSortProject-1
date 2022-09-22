#include <stdio.h>

int main() {
    printf("Insertion Sort Proje 1, yorum satırındadır.");
    return 0;
}

/* [22,27,16,2,18,6] -> Insertion Sort

    [22 27  16  2   18  6]      --->    1. adım (En küçük sayı olan 2'yi buldu.)
    [2  27  16  22  18  6]      --->    2. adım (2 ile 22 yer değiştirdi.)
    [2  6   16  22  18  27]     --->    3. adım (6 ile 27 yer değiştirdi.)
    [2  6   16  18  22  27]     --->    4. adım (18 ile 22 yer değiştirdi.)

        Big-O Notation: O(n^2) ---> O(36)   [n=6]

            Dizi sıralandıktan sonra 18 sayısı ortada olduğundan, Average Case kapsamına girer.

/*

/* [7,3,5,8,2,9,4,15,6] -> Insertion Sort

    [7  3   5   8   2   9   4   15  6]
    [2  3   5   8   7   9   4   15  6]
    [2  3   4   8   7   9   5   15  6]
    [2  3   4   5   7   9   8   15  6]
    [2  3   4   5   6   9   8   15  7]
    [2  3   4   5   6   7   8   15  9]
    [2  3   4   5   6   7   8   9   15]

        Big-O Notation: O(n^2) ---> O(81)   [n=9]