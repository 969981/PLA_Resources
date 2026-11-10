/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed100; name: FUN_002ed100
 */


void FUN_002ed100(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  byte *__dest;
  byte *__dest_00;
  ulong uVar1;
  size_t sVar2;
  size_t __n;
  byte *__dest_01;
  
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
                    /* try { // try from 002ed148 to 002ed14f has its CatchHandler @ 002ed224 */
  FUN_002e5a60(param_1,param_3[1] + param_2[1] + param_4[1] + param_5[1]);
  __dest_01 = *(byte **)(param_1 + 0x10);
  sVar2 = param_2[1];
  if ((*param_1 & 1) == 0) {
    __dest_01 = param_1 + 1;
  }
  __dest = __dest_01 + sVar2;
  if (sVar2 != 0) {
    memcpy(__dest_01,(void *)*param_2,sVar2);
  }
  sVar2 = param_3[1];
  __dest_00 = __dest + sVar2;
  if (sVar2 != 0) {
    memcpy(__dest,(void *)*param_3,sVar2);
  }
  sVar2 = param_4[1];
  if (sVar2 != 0) {
    memcpy(__dest_00,(void *)*param_4,sVar2);
  }
  __n = param_5[1];
  if (__n != 0) {
    memcpy(__dest_00 + sVar2,(void *)*param_5,__n);
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (__dest_00 + sVar2 + __n != __dest_01 + uVar1) {
                    /* try { // try from 002ed1f4 to 002ed213 has its CatchHandler @ 002ed214 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("out == begin + result.size()","external/com_google_absl/absl/strings/str_cat.cc",
                  0x86,"StrCat");
  }
  return;
}


