/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03260bd4; name: FUN_03260bd4
 */


void FUN_03260bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  uVar1 = FUN_032bd1d4(PTR_PTR_0434a080,0x20,0x10,0,0,(long)param_1 + 0xc);
  *param_1 = uVar1;
  if (*(int *)(param_1 + 1) != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return;
}


