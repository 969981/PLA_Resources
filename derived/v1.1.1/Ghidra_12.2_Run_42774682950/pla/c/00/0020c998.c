/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c998; name: FUN_0020c998
 */


void FUN_0020c998(long *param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  *param_1 = param_5 + 8;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *(undefined2 *)((long)param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


