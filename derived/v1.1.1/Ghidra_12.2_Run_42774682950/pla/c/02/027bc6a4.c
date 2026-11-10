/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bc6a4; name: FUN_027bc6a4
 */


undefined8 FUN_027bc6a4(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x38) == 0) || (*(int *)(param_1 + 0x1a0) == 0)) {
    return 1;
  }
  uVar1 = FUN_00d6868c();
  return uVar1;
}


