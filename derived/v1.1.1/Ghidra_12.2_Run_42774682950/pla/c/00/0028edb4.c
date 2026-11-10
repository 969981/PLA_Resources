/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028edb4; name: FUN_0028edb4
 */


void FUN_0028edb4(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  puVar1 = PTR_DAT_04373060;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


