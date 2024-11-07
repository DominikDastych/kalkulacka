#include <stdio.h> // Zahrnutí standardní knihovny pro vstup a výstup, umožňuje použití funkcí jako printf a scanf

int main() { // Hlavní funkce, kde začíná a končí provádění programu

    double num1, num2; // Proměnné typu double, které budou ukládat dvě čísla zadaná uživatelem
    int choice; // Proměnná typu int, která ukládá volbu uživatele pro operaci
    double result; // Proměnná typu double pro uložení výsledku výpočtu

    // Výzva k zadání prvního čísla
    printf("Enter the first number: ");
    scanf("%lf", &num1); // Čte desetinné číslo zadané uživatelem a ukládá ho do proměnné 'num1'

    // Výzva k zadání druhého čísla
    printf("Enter the second number: ");
    scanf("%lf", &num2); // Čte desetinné číslo zadané uživatelem a ukládá ho do proměnné 'num2'

    // Vypíše uživatelské menu pro výběr operace
    printf("\nChoose an operation:\n"); // Výpis textu pro přehlednost
    printf("1. Addition (+)\n"); // Nabídka pro sčítání
    printf("2. Subtraction (-)\n"); // Nabídka pro odčítání
    printf("3. Multiplication (*)\n"); // Nabídka pro násobení
    printf("4. Division (/)\n"); // Nabídka pro dělení
    printf("Enter your choice (1-4): "); // Výzva k zadání volby operace
    scanf("%d", &choice); // Čte celé číslo od uživatele a ukládá ho do proměnné 'choice'

    // Rozhodovací struktura, která provádí operaci podle uživatelovy volby
    switch (choice) {
        case 1: // Pokud je volba 1, provede sčítání
            result = num1 + num2; // Sečte 'num1' a 'num2' a uloží výsledek do 'result'
            printf("\nThe result of adding %.2lf and %.2lf is: %.2lf\n", num1, num2, result); // Vypíše výsledek na obrazovku s popiskem
            break; // Ukončí tento případ a přeskočí na konec 'switch'

        case 2: // Pokud je volba 2, provede odečítání
            result = num1 - num2; // Odečte 'num2' od 'num1' a uloží výsledek do 'result'
            printf("\nThe result of subtracting %.2lf from %.2lf is: %.2lf\n", num2, num1, result); // Vypíše výsledek na obrazovku s popiskem
            break; // Ukončí tento případ

        case 3: // Pokud je volba 3, provede násobení
            result = num1 * num2; // Vynásobí 'num1' a 'num2' a uloží výsledek do 'result'
            printf("\nThe result of multiplying %.2lf and %.2lf is: %.2lf\n", num1, num2, result); // Vypíše výsledek na obrazovku s popiskem
            break; // Ukončí tento případ

        case 4: // Pokud je volba 4, provede dělení
            if (num2 != 0) { // Zkontroluje, zda 'num2' není nula, aby nedošlo k dělení nulou
                result = num1 / num2; // Vydělí 'num1' a 'num2' a uloží výsledek do 'result'
                printf("\nThe result of dividing %.2lf by %.2lf is: %.2lf\n", num1, num2, result); // Vypíše výsledek na obrazovku s popiskem
            } else { // Pokud je 'num2' nula
                printf("\nError: Division by zero is not allowed.\n"); // Vypíše chybovou hlášku
            }
            break; // Ukončí tento případ

        default: // Pokud uživatel zadal číslo mimo rozsah 1–4
            printf("\nInvalid choice. Please run the program again and choose between 1-4.\n"); // Vypíše chybu, že volba je neplatná
    }

    return 0; // Vrací 0, což signalizuje, že program úspěšně skončil
}
