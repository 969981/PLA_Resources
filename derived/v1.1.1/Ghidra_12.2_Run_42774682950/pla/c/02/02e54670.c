/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e54670; name: FUN_02e54670
 */


void FUN_02e54670(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 0x28);
  }
  *param_2 = uVar1;
  if (*(uint *)(param_1 + 0x30) < 2) {
    *param_3 = 0;
    return;
  }
  *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  return;
}


