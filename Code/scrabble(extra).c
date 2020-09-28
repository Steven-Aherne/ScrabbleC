//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//
//void generate_letters(int number, char *destination) {
//    char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
//    int i;
//    unsigned int rand_seed;
//    printf("Enter number < 1000: ");
//    scanf("%d", &rand_seed); // initialise the PRNG
//    getchar();
//    srand(rand_seed);
//    // Half of the letters should be vowels
//    for (i = 0; i < number / 2; i++, destination++)
//        *destination = vowels[rand() % 5];
//    for (; i < number; i++, destination++)
//        *destination = rand() % 26 + 'a';
//}
//int read_array_from_file(const char* filepath, int *array, int array_length) {
//    FILE *file;
//    int i;
//    if ((file = fopen(filepath, "r")) == NULL)
//        return -1;
//    for (i = 0; i < array_length;i++) {
//        if (fscanf(file, "%d", &array[i]) == EOF)
//            break;
//        fscanf(file, "%*[^\n]");	//skipping characters till \n
//    }
//    fclose(file);
//    return i;
//}
//struct my_pair {	//for storing words
//    char* str;
//    int score;
//};
//
//int main()
//{
//    int n;
//    printf("Enter number of letters to generate: ");
//    scanf("%d", &n);
//
//    char destination[1000];
//    generate_letters(n, destination);
//
//    int count[26] = { 0 };
//    for (int i = 0; i < n; i++)
//        count[destination[i] - 97]++;
//
//    int arr[26] = { 0 };
//    read_array_from_file("C:\\Users\\Steven\\OneDrive\\Course Work\\Year 2\\Semester 2\\C Programming\\Scrabble\\Code\\letter_values.txt", arr, 26);
//
//    printf("Your letters (and their count) are:\n");
//    for (int i = 0; i < 26; i++)
//        if (count[i] != 0)
//            printf("%c --> %d\n", i + 97, count[i]);
//
//    char ch = 'y';
//    int total = 0;
//    struct my_pair words[1000] = { NULL };
//    int letter_count = 0;
//    int j = 0;
//    do {
//        int copy[26] = { 0 };
//        for (int i = 0; i < 26; i++)
//            copy[i] = count[i];
//
//        fflush(stdin);
//        char str[100];
//        printf("input word:");
//        scanf("%s", &str);
//        int score = 0;
//        char flag = '1';
//        int i;
//        for (i = 0; str[i] != '\0'; i++) {
//            letter_count++;
//            if (str[i] >= 'A' && str[i] <= 'Z')	//converting from uppercase to lower case
//                str[i] += ' ';
//            if (copy[str[i] - 97] == 0)
//            {
//                printf("Letter %c not available\n", str[i]);
//                printf("Not enough letters available to make : %s\n", str);
//                score = 0;
//                flag = '0';
//                break;
//            }
//            copy[str[i] - 97]--;
//            score += (arr[str[i] - 97]);
//        }
//        total += score;
//        if (flag == '1') {
//            char *temp = (char*)malloc(i * sizeof(char));
//            strcpy(temp, str);
//            words[j].str = temp;
//            words[j].score = score;
//            j++;
//            printf("You used: %s. Worth %d. Current total %d\n", str, score, total);
//        }
//
//        while (getchar() != '\n');
//        printf("Try again ? (y / n)");
//        ch = getchar();
//
//    } while (ch != 'n');
//
//    printf("You provided the following words:\n");
//    for (int i = 0; i < j; i++)
//        printf("%s -> %d\n", words[i].str, words[i].score);
//    printf("Total score: %d\n", total);
//    printf("Letter count: %d", letter_count);
//    return 0;
//}
