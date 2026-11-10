/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fdc74; name: FUN_007fdc74
 */


void FUN_007fdc74(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *param_1 = (long)(PTR_DAT_04377610 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x14) = 0x12;
  param_1[3] = 8;
  return;
}


