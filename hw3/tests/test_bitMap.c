//
// Created by bogdan on 6/4/18.
//

#include <check.h>
#include "bitMap.h"

START_TEST (test_setBitByNumber)
    {
        int size = 100;
        int* array = (int*) malloc(size * sizeof(int));

        setBitByNumber(array, size, 1, 10);
        setBitByNumber(array, size, 1, 9);
        setBitByAddress(array, size, array, 1);
        setBitByNumber(array, size, 1, 8);
        printf("%i\n", getBitByNumber(array, size, 9));
        setBitByNumber(array, size, 0, 9);
        printf("%i\n", getBitByNumber(array, size, 9));
     }
END_TEST

START_TEST (test_getBitByNumber)
    {
        //YOUR CODE HERE
    }
END_TEST

START_TEST (test_setBitByAddress)
    {
        int size = 100;
        int* array = (int*) malloc(size * sizeof(int));
        memset(array, 0, size * sizeof(int));

        void* position = (long) array + 0 * sizeof(int);

        setBitByAddress(array, size, position, 1);
        printf("%i\n", getBitByAddress(array, size, position));
    }
END_TEST

START_TEST (test_getBitByAddress)
    {
        //YOUR CODE HERE
    }
END_TEST

Suite *str_suite(void) {
    Suite *suite = suite_create("priority queue");
    TCase *tcase = tcase_create("case");
    tcase_add_test(tcase, test_setBitByNumber);
    tcase_add_test(tcase, test_getBitByNumber);
    tcase_add_test(tcase, test_setBitByAddress);
    tcase_add_test(tcase, test_getBitByAddress);
    suite_add_tcase(suite, tcase);
    return suite;
}

int main(int argc, char *argv[]) {
    int number_failed;
    Suite *suite = str_suite();
    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return number_failed;
}