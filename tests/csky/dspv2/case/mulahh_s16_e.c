#include "testsuite.h"
#include "test_device.h"
#include "dspv2_insn.h"
#include "sample_array.h"
int main(void)
{
    int i = 0;
    init_testsuite("Testing insn mulahh.s16.e\n");

    for (i = 0;
         i < sizeof(samples_mulahh_s16_e)/sizeof(struct ternary64_calculation);
         i++) {
        TEST(test_mulahh_s16_e(samples_mulahh_s16_e[i].op1, samples_mulahh_s16_e[i].op2, samples_mulahh_s16_e[i].op3)
                     == samples_mulahh_s16_e[i].result);
    }
    return done_testing();
}
