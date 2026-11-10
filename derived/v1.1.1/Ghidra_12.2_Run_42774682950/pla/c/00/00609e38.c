/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00609e38; name: FUN_00609e38
 */


void FUN_00609e38(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04375300;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = puVar1 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return;
}


