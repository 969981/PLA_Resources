/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f87c64; name: FUN_02f87c64
 */


void FUN_02f87c64(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_042b6388;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 1;
  param_1[6] = 0;
  param_1[7] = &DAT_042d95d8;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((long)param_1 + 0x54) = 0xc47a00003fc00000;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


