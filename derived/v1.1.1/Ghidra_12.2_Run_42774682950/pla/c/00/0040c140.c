/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c140; name: FUN_0040c140
 */


void FUN_0040c140(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0)) {
      FUN_004006a0(*param_1,(long)*(int *)((long)param_1 + 0xc) << 2);
      if ((*(byte *)((long)param_1 + 0x14) >> 3 & 1) != 0) {
        thunk_FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_lib.c",0x94);
        if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
          return;
        }
        goto LAB_0040c1ac;
      }
      FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_lib.c",0x96);
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
LAB_0040c1ac:
      FUN_004006a0(param_1,0x18);
      FUN_00400420(param_1,"external/openssl/crypto/bn/bn_lib.c",0xa4);
      return;
    }
  }
  return;
}


