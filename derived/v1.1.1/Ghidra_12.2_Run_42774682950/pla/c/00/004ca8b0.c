/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ca8b0; name: FUN_004ca8b0
 */


undefined8 FUN_004ca8b0(long param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0xa8) + 0x110) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0xa8) + 0x108) != 0)) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x38) == 0) {
      if (iVar1 == 0xc) {
        return 1;
      }
    }
    else if ((iVar1 == 0) || (iVar1 == 0x14)) {
      return 1;
    }
  }
  return 0;
}


