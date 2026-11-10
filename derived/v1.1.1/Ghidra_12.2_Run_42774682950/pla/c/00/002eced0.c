/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eced0; name: FUN_002eced0
 */


void FUN_002eced0(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t __n;
  size_t __n_00;
  byte *__dest;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
                    /* try { // try from 002ecefc to 002ecf03 has its CatchHandler @ 002ecfa4 */
  FUN_002e5a60(param_1,param_3[1] + param_2[1]);
  __dest = *(byte **)(param_1 + 0x10);
  __n = param_2[1];
  if ((*param_1 & 1) == 0) {
    __dest = param_1 + 1;
  }
  if (__n != 0) {
    memcpy(__dest,(void *)*param_2,__n);
  }
  __n_00 = param_3[1];
  if (__n_00 != 0) {
    memcpy(__dest + __n,(void *)*param_3,__n_00);
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (__dest + __n + __n_00 != __dest + uVar1) {
                    /* try { // try from 002ecf74 to 002ecf93 has its CatchHandler @ 002ecf94 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("out == begin + result.size()","external/com_google_absl/absl/strings/str_cat.cc",
                  0x6a,"StrCat");
  }
  return;
}


