/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b8880; name: FUN_004b8880
 */


undefined8 FUN_004b8880(undefined4 *param_1,undefined4 *param_2)

{
  param_2[10] = 0xffffffff;
  memset((void *)((long)(param_2 + 0xc) + *(long *)(param_2 + 0x1c)),0,
         0x40 - *(long *)(param_2 + 0x1c));
  FUN_004b7230(param_2,param_2 + 0xc,*(undefined8 *)(param_2 + 0x1c));
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  FUN_004006a0(param_2,0x78);
  return 1;
}


