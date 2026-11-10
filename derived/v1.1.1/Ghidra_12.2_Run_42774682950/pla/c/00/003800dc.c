/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003800dc; name: FUN_003800dc
 */


void FUN_003800dc(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04373c80;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0x3f800000;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  param_1[3] = (long)puVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  return;
}


