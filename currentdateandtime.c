#include <stdio.h>
#include <dos.h>

int main() {
    struct date dt;
    printf("Enter new date (day month year): ");
    scanf("%d %d %d", &dt.da_day, &dt.da_mon, &dt.da_year);
    setdate(&dt);
    printf("System date updated to: %02d-%02d-%d\n", dt.da_day, dt.da_mon, dt.da_year);
    return 0;
}
