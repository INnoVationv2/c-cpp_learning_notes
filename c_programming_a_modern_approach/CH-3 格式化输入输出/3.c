#include <stdio.h>

int main() {
    int prefix, group_id, pub_code, item_no, check_num;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_id, &pub_code, &item_no, &check_num);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_no);
    printf("Check digit: %d\n", check_num);
    return 0;
}
