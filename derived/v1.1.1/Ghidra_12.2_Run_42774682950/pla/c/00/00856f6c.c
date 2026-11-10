/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00856f6c; name: FUN_00856f6c
 */


void FUN_00856f6c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043780c0 + 0x10;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)puVar1;
  FUN_00844984(param_1 + 2);
  FUN_00844984(param_1 + 0x324);
  FUN_00844984(param_1 + 0x646);
  FUN_00844984(param_1 + 0x968);
  FUN_00856cbc(param_1 + 0xc8a);
  *(undefined8 *)((long)param_1 + 0x68d4) = 0;
  *(undefined4 *)((long)param_1 + 0x68dc) = 0;
  param_1[0xd1c] = 0;
  return;
}


