/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00848470; name: FUN_00848470
 */


void FUN_00848470(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04378008;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[4] = puVar1 + 0x10;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  FUN_007f0ce0(param_1 + 8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  memset((void *)((long)param_1 + 100),0,4);
  *(undefined4 *)((long)param_1 + 100) = 0;
  return;
}


