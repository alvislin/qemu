#include "testsuite.h"
#include "test_device.h"
#include "dspv2_insn.h"
#include "sample_array.h"
int main(void)
{
    int i = 0;
    init_testsuite("Testing insn sub.s32.s\n");

    for (i = 0;
         i < sizeof(samples_sub_s32_s)/sizeof(struct binary_calculation);
         i++) {
        TEST(test_sub_s32_s(samples_sub_s32_s[i].op1, samples_sub_s32_s[i].op2)
                     == samples_sub_s32_s[i].result);
    }
    return done_testing();
}
