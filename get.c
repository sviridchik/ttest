//
// Created by victoria Sviridchik on 2020-04-13.
//

int get_rand_range_int(const int min, const int max) {
    return rand() % (max - min + 1) + min;
}
