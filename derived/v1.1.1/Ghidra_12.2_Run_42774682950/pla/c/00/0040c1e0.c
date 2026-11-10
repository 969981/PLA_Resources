/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c1e0; name: FUN_0040c1e0
 */


void FUN_0040c1e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((long)param_1 + 0x14) >> 1 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x14) >> 3 & 1) != 0) {
        thunk_FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_lib.c",0x94);
        if ((*(byte *)((long)param_1 + 0x14) & 1) == 0) {
          return;
        }
        goto LAB_0040c22c;
      }
      FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_lib.c",0x96);
    }
    if ((*(byte *)((long)param_1 + 0x14) & 1) != 0) {
LAB_0040c22c:
      FUN_00400420(param_1,"external/openssl/crypto/bn/bn_lib.c",0xaf);
      return;
    }
  }
  return;
}


