/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00684b00; name: FUN_00684b00
 */


void FUN_00684b00(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_04375b98;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_04375ba0 != 0) {
    FUN_0032d2b0(PTR_DAT_04375ba0);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[3] = (long)PTR_DAT_043730c0;
  param_1[2] = (long)puVar1;
  return;
}


