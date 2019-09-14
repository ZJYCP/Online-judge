//
// Created by ycp on 19-9-14.
//

#include <cstdio>

int change(char c) {
    if (c == 'B') return 0;
    if (c == 'C') return 1;
    if (c == 'J') return 2;
}

int main() {

    int n;
    int mp[3] = {'B', 'C', 'J'};
    scanf("%d", &n);

    int time_a[3] = {0};
    int time_b[3] = {0};
    int hand_a[3] = {0}, hand_b[3] = {0};


    char c1, c2;
    int k1, k2;
    for (int i = 0; i < n; i++) {
        getchar();
        scanf("%c %c", &c1, &c2);
        k1 = change(c1);
        k2 = change(c2);

        if ((k1 + 1) % 3 == k2) {
            time_a[0] += 1;
            time_b[2] += 1;
            hand_a[k1] += 1;
        } else if ((k2 + 1) % 3 == k1) {
            time_a[2] += 1;
            time_b[0] += 1;
            hand_b[k2] += 1;
        } else {
            time_a[1] += 1;
            time_b[1] += 1;
        }
    }

    printf("%d %d %d\n", time_a[0], time_a[1], time_a[2]);
    printf("%d %d %d\n", time_b[0], time_b[1], time_b[2]);

    int id1 = 0, id2 = 0;
    for (int i = 1; i < 3; i++) {
        if (hand_a[i] > hand_a[id1]) id1 = i;
        if (hand_b[i] > hand_b[id2]) id2 = i;
    }

    printf("%c %c", mp[id1], mp[id2]);

}